#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a;double b;
    cin>>a>>b;
    if( a%5!=0 || a+.50>b ){
        cout<<fixed<<setprecision(2)<<b<<endl;
    }else{
        cout<<fixed<<setprecision(2)<<(b-a-(.50))<<endl;
    }
}