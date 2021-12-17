#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#define ffor(_a,_f,_t) for(int _a=(_f),__t=(_t);_a<__t;_a++)
#define all(_v) (_v).begin() , (_v).end()
#define sz size()
#define pb push_back
#define SET(__set, val) memset(__set, val, sizeof(__set))
#define FOR(__i, __n) ffor (__i, 0, __n)
typedef long long LL;

using namespace std;

const int MAXN = 500;

double x[MAXN], y[MAXN];
double dp[MAXN][MAXN];

vector<pair<double, int> > points;

#define SQR(_a) ((_a) * (_a))

double dist(int p1, int p2) {
	return sqrt(SQR(x[p1] - x[p2]) + SQR(y[p1] - y[p2]));
}

bool OK[MAXN][MAXN];

double memo(int i, int j) {
	if (i > j)
		return 0.0;
		
	double &ret = dp[i][j];
	if (ret > -0.5)
		return ret;
		
	bool can = true;
	int p1 = points[i].second;
	ffor (k, i + 1, j + 1) {
		int p2 = points[k].second;
		
		if (can && OK[i][k]) {
			double tmp = dist(p1, p2) + memo(i + 1, k - 1) + memo(k + 1, j);
			if (ret < -0.5 || tmp < ret)
				ret = tmp;
		}		
		
		can ^= 1;
	}
	return ret;
}

/*
	calc area of triangle
	return 2x bigger area
*/
double area(double xa, double ya, double xb, double yb, double xc, double yc){
	return fabs((xc - xa) * (yb - ya) - (xb - xa) * (yc - ya));
}


int main() {
	int n;
	cin >> n;
	points.clear();
	double ret = 0.0;
	FOR (i, n) {
		cin >> x[i] >> y[i];
		ret += sqrt(SQR(x[i]) + SQR(y[i]));
		points.pb(make_pair(x[i] / y[i], i));
	}
	
	sort(all(points));
	
/*	FOR (i, n) {
		int p = points[i].second;
		cout << "(" << x[p] << ", " << y[p] << "); ";
	}
	cout << endl;*/
		
	FOR (i, MAXN)
		FOR (j, MAXN)
			dp[i][j] = -1.0;
			
	FOR (i, n)
		ffor (j, i + 1, n) {
			int pi = points[i].second;
			int pj = points[j].second;
			OK[i][j] = true;
			double mainArea = area(0.0, 0.0, x[pi], y[pi], x[pj], y[pj]);
			ffor (k, i + 1, j) {
				int pk = points[k].second;
				double cmpArea = area(0.0, 0.0, x[pk], y[pk], x[pi], y[pi]) + area(0.0, 0.0, x[pk], y[pk], x[pj], y[pj]);
				if (cmpArea > mainArea) {
					OK[i][j] = false;
					break;
				}
			}
		}
	

	std::cout << std::fixed;
	cout << std::setprecision(9) << ret + memo(0, n - 1) << endl;
  return 0;
}
