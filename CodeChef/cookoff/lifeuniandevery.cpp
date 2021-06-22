#include <iostream>
using namespace std;
void bruteforce(){
    int i;
    while (true){
        cin>>i;
        if(i!=42){
            cout<<i<<endl;
        }else{
            break;
        }
    }
    return;
}   
int main(){
    bruteforce();
}