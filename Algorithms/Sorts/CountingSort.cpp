#define RANGE 255

vector<int> CountingSort(vector<int> a) {
    int b[RANGE];
    vector<int> c(a.size());
    memset(b,0,sizeof(b));
    for (int i =0;i<a.size();i++){
        b[a[i]]++;
    }
    for (int j = 1;j<= RANGE;j++){
        b[i] += b[i-1];
    }
    for (int i =0;a[i];i++){
        c[b[a[i]] - 1] = a[i];
        --b[a[i]];
    }
    return c;
}