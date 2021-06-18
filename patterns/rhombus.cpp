#include<iostream>
using namespace std;
int main(){
     //Rhombus
    int num;
    cin>>num;
    for (int i=num;i>=0;i--){
        for (int j=1;j<=i;j++){
            cout<<" ";
        }
        for (int j=1;j<=num;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}