#include<iostream>
using namespace std;
int main(){
    //Right triangle pattern
    int n;
    cout<<"enter a number";
    cin>>n;
   for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           cout<<"* ";
       }
       cout<<endl;
   }
}