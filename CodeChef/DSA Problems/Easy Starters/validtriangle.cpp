#include <iostream>
using namespace std;

int valdi (int a,int b,int c){
    if(a+b>=c&&b+c>=a&&a+c>=b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}



int main(){
    int a,b,c;
    cin>>a>>b>>c;
    valdi(a,b,c);
    return 0;
}