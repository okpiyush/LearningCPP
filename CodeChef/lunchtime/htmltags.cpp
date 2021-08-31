#include <string.h>
#include <cctype>
#include <iostream>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>str;
        if((str.substr(0,2)=="</") && (str.substr(-1)==">")){
            cout<<"SUCCESS"<<endl;
        }else{
            cout<<"ERROR"<<endl;
        }
    }
    return 0;
}