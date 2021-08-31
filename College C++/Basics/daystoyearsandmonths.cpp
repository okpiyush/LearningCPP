#include <iostream>
using namespace std;

int main(){
   int days;
    cin>>days;
    while(days>0){
        if (days>365){
            int years=(days/365);
            days=days%365;
            cout<<years<<"years ";
        }else if (days>30){
            int months=days/30;
            days=days%30;
            cout<<months<<"months ";
        }else{
            cout<<days<<"days "<<endl;
            break;
        }
    }
}