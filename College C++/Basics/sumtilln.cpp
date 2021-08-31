#include<iostream>
using namespace std;

int main(){
    cout<<"add till ?"<<endl;
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;

    return 0;
}