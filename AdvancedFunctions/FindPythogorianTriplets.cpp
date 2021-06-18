#include<iostream>
#include<math.h>
using namespace std;
bool pythagorian(int a, int b,int c){
    if(((a*a)+(b*b))==(c*c)){
        return true;
    }else{
        return false;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool koko=pythagorian(a,b,c);
    if(koko==1){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    
}