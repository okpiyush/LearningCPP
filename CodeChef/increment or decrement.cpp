#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%4==0&&a>4){
        cout<<a+1<<endl;
    }else{
        cout<<a-1<<endl;
    }
}