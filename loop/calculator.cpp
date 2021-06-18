#include<iostream>
using namespace std;
int main(){
	 //Calculator
    int num1,num2;
    long ans;
    char c;
    cout<<"Enter the numbers you want to perform operations on by separating them with a space";
    cin>>num1>>num2;
    cout<<"Select the desired operation you want to do";
    cin>>c;
    switch (c){
        case '+' :
            cout<<num1+num2;
            break;
        case '-' :
            cout<<num1-num2;
            break;
        case '*' :
            cout<<num1*num2;
            break;
        case '/' :
            cout<<num1/num2;
            break;
    }
}