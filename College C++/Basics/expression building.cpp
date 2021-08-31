#include <iostream>
using namespace std;

int main(){
    int i1,i2,i3,i4;
    i1=4;
    i2=90;
    i3=8;
    i4=45;
    cout<<i1<<"-"<<i2<<"+"<<i3<<"="<<i1-i2+i3<<endl;
    //i1*(i2-i3)/i4
    cout<<(i1*((i3/i4)+27)/i2)-(i3*(((i2/i1)*i3)+27)/i4)<<endl;

    cout<<"/////////////////////////////////////////////////////////////////////////"<<endl;
    int a,b,c,d,e,f,g,h;
    a=2;b=7;c=3;d=5;e=8;f=9;g=1;h=4;
    cout<<(1+2*a)/3 + (4*(b+c)*(5-d-e))/f - 6*(7/g+h)<<endl;
    cout<<1+2*a/3 + 4*b+c*5-d-e/f - 6*7/g+h<<endl;
    cout<<1+((2*a)/3) + (4*b)+(c*5)-d-(e/f) - ((6*7)/g)+h<<endl;
    return 0;
}