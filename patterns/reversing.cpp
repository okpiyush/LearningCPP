#include<iostream>
using namespace std;
int main(){
     int n,temp,rem;
    cout<<"enter the number that you want to reverse";
    cin>>n;
    rem=0;
    while(n>0){
        temp=n%10;
        rem=rem*10+temp;
        n=n/10;
    }
    cout<<rem<<endl;
    return 0;
}