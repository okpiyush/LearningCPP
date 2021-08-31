#include<iostream>
using namespace std;

void rectangle(int = 2,int = 6);
int main(){
    rectangle (5,9);
    rectangle(8);
    rectangle();
    return 0;
}
void rectangle(int a,int b){
    cout<<a*b<<endl;
    return;
};