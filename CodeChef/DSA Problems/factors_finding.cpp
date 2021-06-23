#include <iostream>
using namespace std;

int factorfind(int a){
    int fac=0;
    int facno[a/2];
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            facno[fac]=i;
            fac+=1;
        }
    }
    facno[fac]=a;
    fac=fac+1;
    cout<<fac<<endl;
    for(int i=0;i<fac;i++){
        cout<<facno[i]<<" ";
    }
    return fac;
}

int main(){
    int k;
    cin>>k;
    factorfind(k);
    return 0;
}