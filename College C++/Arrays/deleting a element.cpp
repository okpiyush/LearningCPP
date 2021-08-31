#include<iostream>
using namespace std;

int main(){
    int a[10]={10,1,2,3,4,5,6,7,8,9};
    int i=0;
    while (i<sizeof(a)/sizeof(int)){
        a[i]=a[i+1];
        i++;
    }
    for(int i=0;i<sizeof(a)/sizeof(int)-1;i++)
    cout<<a[i]<<endl;

    return 0;
}