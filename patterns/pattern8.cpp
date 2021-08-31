#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //deciding the number of rows
    for (int i=n;i>=1;i--){
      if(i==n){
        for (int j=1;j<=i;j++){
            cout<<j<<"";
        }
        for (int j=i-1;j>=1;j--){
            cout<<j<<"";
        }
      }  else{
        for (int j=1;j<=i;j++){
            cout<<j<<"";
        }
        int k=2*(n-i)-1;
        for (int j=1;j<=k;j++) 
        {
            cout<<"*";
        }
        
        for (int j=i;j>=1;j--){
            cout<<j<<"";
        }
      }
    cout<<endl;
    }




    return 0;
}