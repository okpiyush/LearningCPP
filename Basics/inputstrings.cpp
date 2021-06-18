#include <iostream>
using namespace std;
int main(){
    string firstName,lastName,fullName;
    cout << "Type your first name: ";
    cin>>firstName;
    cout << "Type your last name: ";
    cin>>lastName;
    fullName=firstName+" "+lastName;
    cout<<"Your name is: "<<fullName;
    return 0;
}