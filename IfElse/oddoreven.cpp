#include<iostream>
using namespace std;
int main(){
    //sum of 4 no. is Odd or even
   int a,b,c,d,sum;
   cin>>a>>b>>c>>d;
   sum=a+b+c+d;
   if (sum%2==0){
       cout<<"Sum of the numbers is Even";
   }else{
       cout<<"Sum of the numbers is Odd";
   }
}