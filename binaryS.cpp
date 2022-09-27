#include"binaryS.h"
#include<iostream>
using namespace std;

int BinarySearch(int key,int array[],int n1, int n2){
    if (n2<n1) return -1;
    int mid = (n1+n2)/2;
    if (key == array[mid]) return mid;
    if (key < array[mid]){
        BinarySearch( key, array,n1,mid-1);
    }
    else{
        BinarySearch( key, array, mid+1, n2);
    }
}



