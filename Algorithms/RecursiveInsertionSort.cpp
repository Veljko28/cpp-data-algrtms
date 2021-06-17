#include <iostream>
#include <vector>
#include "helper.h"

namespace {
    void RecursiveInsertionSort(std::vector<int> v, int n){
        if (n <= 1){
            return;
        }

        RecursiveInsertionSort(v, n-1);

        int last = v.back();
        int j = v[n-2];

        while (j > 0 && v[j] > last){
            v[j+1] = v[j--];
        }
        v[j+1] = last;
    }

    void RecursiveInsertionSort_Array(int a[], int n){
        if (n <= 1){
            return;
        }

        RecursiveInsertionSort_Array(a,n-1);

        int last = a[n-1];
        int j = a[n-2];

        while (j > 0 && a[j] > last){
            a[j+1] = a[j--];
        }
        a[j+1] = last;
    }

    void test() {
        std::vector<int> v {3 ,1, 2, 5, 4, 7, 6};
        printVector(v);

        RecursiveInsertionSort(v,v.size());

        printVector(v);
    }
}