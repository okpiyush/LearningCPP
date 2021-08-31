#include <iostream>
using namespace std;

int main(){
    int a=1,b=2;
    int *aptr=&a;
    int *bptr=&b;
    int c=(*aptr+*bptr);
    int *cptr=&c;
    cout<<"Address of A = "<<aptr<<endl;
    cout<<"Address of B = "<<bptr<<endl;
    cout<< "Simple Addition = " <<a+b<<endl;
    cout<<"Pointer Addition = "<<*aptr+*bptr<<endl;
    cout<<"Pointer Variable C is = "<<cptr<<endl;
    cout<<"Pointer Addition Variable = "<<*cptr<<endl;
    cout<<"Pointer Addition Variable = "<<*cptr+*cptr<<endl;
}