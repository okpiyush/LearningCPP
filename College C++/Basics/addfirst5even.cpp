#include <iostream>
using namespace std;

int main(){
    int sumfor=0,sumwhile=0,sumdo=0;
    for (int i = 0; i <= 10; i+=2)
    {
        sumfor+=i;
    }
    int i=0;
    while (i<=10)
    {
        sumwhile+=2;
        i+=2;
    }
    int ido=0;
    do
    {
        sumdo+=ido;
        ido+=2;
    } while (i<=10);
    cout<<sumdo<<sumfor<<sumwhile;
}