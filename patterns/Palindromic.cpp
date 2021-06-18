#include<iostream>
using namespace std;
int main(){
    //Palindromic
    int num;
    cin>>num;
    for (int i=num;i>=0;i--){
        for (int j=0;j<=i;j++){
            cout<<" ";
        }
        for (int j=num-i;j>0;j--) {
            cout << j;
        }
        for(int k=2;k<=num-i;k++){
            cout << k;
        }
        cout<<endl;
    }
}