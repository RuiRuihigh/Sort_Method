#include "merge_sort.h"
#include <iostream>
#include<limits.h>
#include <cmath>

using namespace std;

void merge(int A[],int p,int q,int r){
    int l[q-p+1]{};
    int z[r-q]{};
    int j = 0;
    int k = 0;
    for (j;j<q-p+1;j++){
        l[j] = A[p+j];
    }
    
    for (k;k<r-q;k++){
        z[k] = A[q+1+k];
    }
    int jj = 0;
    int kk = 0;
    int i = p;
    while (true){
        if (jj==q-p+1 && kk==r-q){
            break;
        }
        else if (jj==q-p+1){
            A[i] = z[kk];
            i++;
            kk++;
        }
        else if (kk==r-q){
            A[i] = l[jj];
            i++;
            jj++;
        }
        
        else{
            if (l[jj]<=z[kk]){
                A[i] = l[jj];
                i++;
                jj++;
            }
            else{
                A[i] = z[kk];
                i++;
                kk++;
            }
        }
    }

}

void mergesort(int A[],int p,int r){
    if (r>p){
        int q = floor((p+r)/2);
        mergesort(A,p,q);
        mergesort(A,q+1,r);
        merge(A,p,q,r);
    }
    else if(r==p) {
    }
    else{
        throw("The array is invalid!");
    }
}
