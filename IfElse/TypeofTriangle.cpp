#include<iostream>
using namespace std;
int main()
{
    //nested if
   int side1,side2,side3;
   cin>>side1>>side2>>side3;
   if (side1+side2>side3 && side2+side3>side1 && side3+side1>side2 ){
       if(side1==side2||side1==side3||side3==side2){
           if(side1==side2 && side2==side3){
               cout<<"Equilateral Triangle";
           }else {
               cout << "Isosceles Triangle";
           }
        }else{
            cout<<"Scalene Triangle";
        }
   }else{
       cout<<"Triangle not Possible";
   }

}