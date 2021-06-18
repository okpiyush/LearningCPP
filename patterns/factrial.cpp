#include<iostream>
using namespace std;
int main(){
    int a,mult;
   cout<<"Enter the number you want to find factorial of ?";
   cin>>a;

   mult=1;
   for (int i=a;i>0;i--){
       mult*=i;
       cout<<mult<<endl;
   }
   cout<<mult;

}