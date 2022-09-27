#include"bs.h"
#include<iostream>

void BubbleSoft(int array[],int n){
    int flag = 0;
    while(flag != n-1){
        flag = 0;
        for (int i=0; i<n-1; i++){
            if (array[i]<array[i+1]){
                flag++;
            }
            else{
                int temp1 = array[i];
                int temp2 = array[i+1];
                array[i+1] = temp1;
                array[i] = temp2;
            }
        }
    }

}