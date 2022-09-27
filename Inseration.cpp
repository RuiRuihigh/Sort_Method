#include<iostream>
#include "Inseration.h"
using namespace std;

void inseration(int array[],int n){
    for (int i =1; i<n-1;i++){
        int task = array[i];
        int c = i-1;
        while (c>=0 && array[c]>task){
            array[c+1] = array[c];
            c--;
        }
        array[c+1] = task;
        }
    }
