#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<((a>b)?((a>c)?a:c):((b>c)?b:c))<<endl;
    if (a>b){
        if(a>c){
            cout<<a<<endl;
        }else{
            cout<<c<<endl;
        }
    }else{
        if(b>c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    return 0; 
}