#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<10){
        cout<<"you have entered a number smaller than 10";
    }else if(n>10){
        cout<<"you have entered a number greater than 10";
    }else{
        cout<<"you have entered 10";
    }
    return 0;
}
