#include<iostream>
using namespace std;
int main(){
    
    //Array is initialized  using : DataType array[length]={l1,l2,l3,l4,l5}
    
    //ie : int array[4]={10,20,30,40};

    //here the space complexity of array is : 4bytes * 4 ints;ie : 16bytes.
    
    
    /*long method to initialize an array and fill values*/
    int array[4];
    array[0]=10;
    array[1]=20;
    array[2]=30;
    array[3]=40;
    cout<<array[3]<<endl;
    return 0;
}