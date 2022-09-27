#include <iostream>
//#include<array>
//#include "bs.h"
#include"binaryS.h"
//#include"Inseration.h"
#include "merge_sort.h"
//g++ tut1.cpp merge_sort.cpp binaryS.cpp -o tut1
//g++ tut1.cpp Inseration.cpp binaryS.cpp -o tut1  
using namespace std;


int main(){
    int list[] = {4,6,3,7,8,1,5,9,10};
    //BubbleSoft(list,7);
    //inseration(list,7);
    mergesort(list,0,8);
    cout << "The list is:[" ;
    for (int i=0;i<9;i++){
        cout << list[i] << ",";
    }
    cout << "]" <<endl;
    cout << "The position of the key is:" << BinarySearch(9,list,0,8) << endl;
    return 0;
}