#include <iostream>
using namespace std;

int isOdd(int n){
    int odd;
    if(n%2==0){
        return false;
    }else{
        return true;
    }
    
}


void range(int k, int l){
    for (int i=k;i<=l;i++){
        if(isOdd(i)){
            cout<<i<<" ";
            continue;
        }else{
            continue;
        }
    }
}



int main(){
    int a,b;
    cin>>a>>b;
    range(a,b);
    return 0;
}