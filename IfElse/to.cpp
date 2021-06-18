#include <iostream>
using namespace std;
int main(){
    int a,b;
    a=0;b=10;
   /* if(a>=b){
        cout<<"a";
    }else{
        cout<<"b";
    }*/
    string res= (a>=b) ? "A is greater":"b is greater";
    cout<<res;
    return 0;
}