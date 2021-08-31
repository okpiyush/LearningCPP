#include <iostream>
using namespace std;
int main(){
    int a,b,c,n;
    cin>>n;
    if(n>0&&n<21001){
    for (int i =0; i<n;i++){
        cin>>a>>b>>c;
        int z=(b-a)/c;
        if(a>99&&b>99&&c>0&&int(z)==z&&b<=200&&a<=200&&c<=50){
            cout<<z<<endl;
        }
    }    
    }
    
    return 0;
}