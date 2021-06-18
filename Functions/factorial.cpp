#include<iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for (int i=2;i<=n;i++){
        facto*=i;
    }
    return facto;
}
int main(){
    int n;
    cout<<"Bta kahan tak factorial krna hai ?";
    cin>>n;
    int k=fact(n);
    cout<<k;
    return k;
}