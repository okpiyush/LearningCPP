#include<iostream>
using namespace std;
void fibonacci(int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
        cout<<nextterm<<endl;
    }
    return;
}
int main(){
int b;
cout<<"Till where do you want to print ?"<<endl;
cin>>b;
cout<<endl;
    fibonacci(b);
}