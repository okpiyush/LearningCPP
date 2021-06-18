#include<iostream>
using namespace std;
int main(){
     //Square pattern;
    int n;
    cout<<"Tell me the length of square !";

    cin>>n;
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<n;cols++){
            cout<<"*  ";
        }
        cout<<endl;
    }
}