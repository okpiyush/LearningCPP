#include<iostream>
using namespace std;

int main(){
    int fly[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<sizeof(fly)/sizeof(int);i++){
        cout<<"Element Number "<<i<<" is "<<fly[i]<<endl;
    }



    return 0;
}