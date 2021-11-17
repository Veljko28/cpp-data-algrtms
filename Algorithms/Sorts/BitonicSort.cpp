

void BitonicSort(vector<int> a, int start, int direction){
    if (a.size()>1){
        int k = a.size()/2;
        for (int i=start;i<start+k;i++){
            if (direction == (a[i] > a[i+k])) swap(a[i],a[i+k]);
        }
        BitonicSort(a,start,direction);
        BitonicSort(a,start+k,direction);
    }
}