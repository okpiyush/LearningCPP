#include<iostream>
using namespace std;
int main(){
    //prime no. check
    int num;
    bool flag= true;
    cout<<"Which Number do you want to check using the Program ?";
    cin>>num;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag=false;
            break;
        }else{
         flag=true;
        }

    }
    if(flag){
        cout<<"it is a Prime Number";
    }else{
        cout<<"Not a Prime Number";
    }
    return 0;
}