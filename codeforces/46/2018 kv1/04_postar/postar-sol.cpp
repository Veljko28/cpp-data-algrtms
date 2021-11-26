#include <algorithm>
#include <cmath>
#include <cstdio>

struct point
{
    long long x, y;
} ;
point operator-(point a, point b) { return {a.x - b.x, a.y - b.y}; }
// (z-component of) cross product
long long operator*(point a, point b) { return a.x*b.y - a.y*b.x; }
const point ORIGIN = {0, 0};

// we need sorting by polar angle
bool operator<(point a, point b)
{
    // int s_a = (a.y > 0) || (a.y == 0 && a.x < 0);
    // int s_b = (b.y > 0) || (b.y == 0 && b.x < 0);
    // if(s_a == s_b)
    //     return a * b > 0;
    // else return s_a;
    return std::atan2(a.y, a.x) < std::atan2(b.y, b.x);
}

const int N = 1000;
point pts[2 * N];
bool ok[N][N];
double dp[2 * N][2 * N];
int n;

long long sgn(long long x) { return x < 0 ? -1 : 1; }

bool diff_side(point a, point b, point x, point y)
{
//    printf("%lld %lld\n", (b-a)*(x-a), (b-a)*(y-a));
    return sgn((b-a) * (x-a)) != sgn((b-a) * (y-a));
}

bool intersect(point a, point b, point x, point y)
{
//    printf("%d%d\n", diff_side(a, b, x, y), diff_side(x, y, a, b));
    return diff_side(a, b, x, y) && diff_side(x, y, a, b);
}

bool check_ok(int i, int j)
{
    if((j - i) % 2 == 0)
        return false;

    for(int k = 0; k < n; k++)
        if(k != i && k != j)
        {
//            printf("%d %d %d -> %d\n", i, j, k, intersect(pts[i], pts[j], pts[k], ORIGIN));
            if(intersect(pts[i], pts[j], pts[k], ORIGIN))
                return false;
        }
    
    return true;
}

bool is_ok(int i, int j)
{
    if(j - i >= n) return false; // angle more than full circle
    if((pts[j] - pts[i]) * (ORIGIN - pts[i]) < 0)
        return false; // angle more than half-circle
    return ok[i % n][j % n];
}

long long sqr(long long x) { return x * x; }
double dist(int i, int j)
{
    return std::sqrt(sqr(pts[i].x - pts[j].x) + sqr(pts[i].y - pts[j].y));
}

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%lld %lld", &pts[i].x, &pts[i].y);

    std::sort(pts, pts + n);
//    for(int i = 0; i < n; i++) fprintf(stderr, "(%lld, %lld)\n", pts[i].x, pts[i].y);
    for(int i = 0; i < n; i++)
        pts[i + n] = pts[i];

    // simple O(N^3) precomputation (complexity is dominated by the DP
    // anyway, no need for a quadratic algorithm here)
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            ok[i][j] = ok[j][i] = check_ok(i, j);

    for(int delta = 0; delta < 2 * n; delta++)
        for(int i = 0; i < 2 * n; i++)
        {
            int j = i + delta;
            if(j >= 2 * n) continue;
            
            dp[i][j] = INFINITY;

            if(is_ok(i, j))
                dp[i][j] = dp[i + 1][j - 1] + dist(i, j);
            for(int k = i + 1; k < j; k++)
                dp[i][j] = std::min(dp[i][j], dp[i][k] + dp[k + 1][j]);

            // if(is_ok(i,j) && dp[i][j] == dp[i+1][j-1] + dist(i,j))
            //     printf("%d %d -> outer\n", i, j);
            // else for(int k = i + 1; k < j; k++)
            //          if(dp[i][j] == dp[i][k] + dp[k+1][j])
            //          {printf("%d %d -> %d\n", i, j, k); break;}
        }

    double res = INFINITY;
    for(int i = 0; i < n; i++)
        res = std::min(res, dp[i][i + n - 1]);

    // for(int i = 0; i < 2 * n; i++)
    //     for(int j = 0; j < 2 * n; j++)
    //         printf("%10.2lf%c", dp[i][j], j == 2*n-1 ? '\n' : ' ');
    // for(int i = 0; i < n; i++) printf("%10.2lf\n", dp[i][i+n-1]);

    for(int i = 0; i < n; i++)
        res += std::sqrt(sqr(pts[i].x) + sqr(pts[i].y));

    // for(int i = 0; i < n; i++)
    //     for(int j = 0; j <= n; j++)
    //         printf("%c", j == n ? '\n' : ok[i][j] ? '+' : '.');

    // double ss = 0;
    // for(int i = 0; i < n; i++)
    //     ss += std::sqrt(sqr(pts[i].x) + sqr(pts[i].y));
    // for(int i = 1; i <= 3; i++)
    //     printf("%d -> %.8lf\n", i, ss+dist(0, i) + dist(i == 1 ? 2 : 1, i == 3 ? 2 : 3));
    
    printf("%.8lf\n", res);
    return 0;
}
