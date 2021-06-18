#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int icheck(int a){
    int i;
    i=0;
    while(true){
        if ((pow(8,i))<=a && a<(pow(8,i+1))){
            return i;
            break;
        }else{
            i++;
        }
    }
}
int dto(int n,int i){
    int temp=0;
    int dig=0;
    while(i>=0){
        int y=(pow(8,i));
        temp=n/y;
        dig=dig*10+temp;
        n=n%y;
        i--;
    }
    return dig;

}
int main(){
    int n;
    cin>>n;
    int i = icheck(n);
    int k = dto(n,i);
    cout<<k<<endl;
}