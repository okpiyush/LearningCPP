#include <iostream>
using namespace std;
int main() 
{
  int  var = 10;
  int b=9;
  int a=90;
  int *aptr=&a;
  int *bptr=&b;
  int **bpp=&bptr;
  int **app=&aptr;
  cout<<**app+**bpp<<endl;
  int  *p1;      //this can store the address of variable var
  int  **p2;     /*this can store the address of pointer variable */
  p1 = &var;        // store the var address in p1.
  p2 = &p1;        // store the p1 address in p2.
  cout<<*p1+**p2;
  return 0;
}