#include <iostream>
using namespace std;

int buyplease(int a, int b , int ba,int bb){
    int total;
    total=a*ba+b*bb;

    return total;
}


int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<buyplease(a,b,c,d);
    return 0;
}