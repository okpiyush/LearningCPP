#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int valueoficheck(int a){
    int i;
    i=0;
    bool go=true;
    while(go){
        if ((pow(2,i))<=a && a<(pow(2,i+1))){
            return i;
            break;
        }else{
            i++;
        }
    }
}
long dtb(int i,int a){
    long dig;
    dig=0;
    while(i>=0){
        if ((pow(2,i))<=a && a<(pow(2,i+1))){
        a=a-pow(2,i);
        dig=dig*10+1;
        i--;
    }else{
        dig=dig*10+0;
        i--;
    }
    }
    return dig;
}
int main(){
    int a;cin>>a;
    int k=valueoficheck(a);
    long bin=dtb(k,a);
    cout<<bin;
}