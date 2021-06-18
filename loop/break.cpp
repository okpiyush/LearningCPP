#include<iostream>
using namespace std;
int main(){
    int money=5000;
    //We have 5000 rs to spend on electronics; and every elctronic gadget costs 400 also we can buy only on even days
    for (int i=1;i<=30;i++){
        if (i%2!=0){
            continue;
        };
        if(money<400){
            cout<<"Money Left :"<<money<<endl<<"You cant Buy any more gadgets\n";
            cout<<"You Bought "<<i/2<<"Gadgets";
            break;
        }
        cout<<"You bought a gadget"<<endl;
        money=money-400;
    }

}
