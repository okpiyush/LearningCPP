#include <iostream>
using namespace std;

int isPrime(int n){
    int odd;
    for (int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
            break;
        }else{
            continue;
        }
    }
    return true;
}


void range(int k, int l){
    for (int i=k;i<=l;i++){
        if(isPrime(i)){
            cout<<i<<" ";
            continue;
        }else{
            continue;
        }
    }
}



int main(){
    range(3,46);
    return 0;
}