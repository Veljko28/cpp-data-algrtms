#include <iostream>
#include <vector>
#include "helper.h"

namespace {
    void InsertionSort(std::vector<int> v){
        for (int i =1;i<v.size();i++){
            int idx = i;
            int value = v[i];
            while(idx > 0 && v[idx-1] > value){
                std::swap(v[idx],v[idx-1]);
                idx--;
            }
            v[idx] = value;
        }
    }
    void InsertionSort(int a[], int n){
        for (int i=1;i<n;i++){
            int idx = i;
            int value = a[i];
            while (idx > 0 && a[idx-1] > value){
                std::swap(a[idx], a[idx-1]);
                idx--;
            }
            a[idx] = value;
        }
    }

    void test(){
        std::vector<int> v = { 4, 2, 5, 1, 6, 3};
        printVector(v);

        InsertionSort(v);
        printVector(v);
        
        
    }
}