#include <iostream>
using namespace std;
string isBoth(int a){
    if (a%5==0 && a%11==0)
    {
        return "BOTH";
    }else if(a%5==0 || a%11==0)
    {
        return "ONE";
    }else{
        return "NONE";
    }
    
}

int main(){
    int a;
    cin>>a;
    cout<<isBoth(a)<<endl;
}