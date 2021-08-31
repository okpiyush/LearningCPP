#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    int sum=0;
    int n=10;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    double avg=((double)sum)/n;
    cout<<fixed<<setprecision(2);
    cout<<"avg of the first " <<n<< " digits is "<<avg<<endl; 
    





    return 0;
}