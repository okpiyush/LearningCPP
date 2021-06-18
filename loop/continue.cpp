#include<iostream>
using namespace std;
int main(){
    //exclude all the nos divisible by 3 or 5
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        if (i%3==0 || i%5==0) {
            continue;
        }
        cout<< i<<endl;
    }

}