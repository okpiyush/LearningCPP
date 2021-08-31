#include<iostream>
#include<cstring>
using namespace std;

char rotate(char chr[],int n){
    char cor[n];
    for(int i=n;i>=0;i--){
        cor[i] = chr[n-i];
    }
    cout<<cor<<endl;
}

int main(){
    char crr[20];
    cin.getline(crr,20);
    cout<<rotate(crr,sizeof(crr))<<endl;

    return 0;
}