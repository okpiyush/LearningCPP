#include<iostream>
using namespace std;
void print(int x){
    cout<<x<<endl;
    return;
}
void dprint(double x){
    cout<<x<<endl;
    return;
}
void sprint(string s){
    cout<<s<<endl;
    return;
}
void cprint(char s){
    cout<<s<<endl;
    return;
}
int main(){
    sprint("How are you ?");
    print(9);
    dprint(9);
    cprint('a');

    return 0;
}