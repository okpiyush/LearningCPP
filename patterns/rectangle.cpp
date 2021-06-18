#include<iostream>
using namespace std;
int main(){
    //rectangle
   int rows,cols;
   cout<<"enter the height"<<endl;
   cin>>rows;
   cout<<"enter the breadth"<<endl;
   cin>>cols;
   for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
           cout<<"* ";
       }
       cout<<endl;
   }
}