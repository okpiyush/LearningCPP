#include <iostream>
using namespace std;
int main(){
    bool rejection=false;
    while(!rejection){
        cout<<"i like you riya";
        int riya;
        cin>>riya;
        if (riya==1){
            cout<<"Hurray";
            //relation();
            break;
        }else if(riya==0){
            cout<<"BC (T-T)";
            rejection=true;
            break;
        }else{
            cout<<"I will try again";
            continue;
        }
    }
    return 0;
}