#include<iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
//convert binary to decimal;;
int btd(int a){
    int dig=0;
    int temp;
    int i=0;
    while(a!=0){
        temp=a%10;
       dig+=(pow(2,i)*temp);
       a=a/10;
       i++; 
    }
    return dig;
}
int main(){
    int a;
    cin>>a;
    int k =btd(a);
    cout<<k<<endl;
}