 // If Else
    //Find the Largest number of the given fields
#include<iostream>
using namespace std;
int main()
{
//Voting id can be made or not and the persons age
   int birth,current,left;
   cout<<"What is your birth Year" << endl;

   cin>>birth;

   cout<<"What is the current Year" << endl;

   cin>>current;

   cout<<"Your Current Age is " ;

   left=current-birth;
   cout<<left<<endl;
   if (left>=18){
       cout<<"You are Eligible to Vote";
   }else{
       cout<<"You are Not Eligible to Vote";
   }

}