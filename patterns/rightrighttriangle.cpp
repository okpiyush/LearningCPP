#include<iostream>
using namespace std;
int main(){
    //right right triangle
    for (int i=1;i<=9;i++){
        for (int j=1;j<=9-i;j++){
        cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}