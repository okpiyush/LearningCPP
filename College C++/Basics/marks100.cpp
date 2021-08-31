#include <iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    if (n>100)
    {
        cout<<"Atleast enter valid marks."<<endl;
    }else{
        if (n>=75)
        {
            cout<<"Amazing Work ! You have done well in the course"<<endl;
        }
        else if (n>=60)
        {
            /* code */
            cout<<"Good Work ! But you can do better if you work harder from next time"<<endl;
        }
        else if (n>=45)
        {
            /* code */
            cout<<"Nice Work ! But work harder next time and reach the 60"<<endl;
        }
        else
        {
            /* code */
            cout<<"You didn't Make the cut ! \n Don't get disheartened by the result and work harder. There is nothing you can't achieve if you work hard."<<endl;
        }
        
    }
    
    return 0;
}