#include<iostream>
using namespace std;
int main(){
        //For printing all the primes in a given range
    int till;
    cout<<"In what range do you want to print the given series ?"<<endl;
    cin>>till;
    for(int i=2;i<=till;i++){
        bool flag=true;
        for (int j=2;j<=i/2;j++){
            if(i%j==0) {
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<i <<" is a Prime Number"<<endl;
        }
    }
}