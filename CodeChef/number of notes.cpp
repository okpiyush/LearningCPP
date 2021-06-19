#include <iostream>
#include <cmath>
using namespace std;
int noteneed(int rem){
    if(rem>=100){
        return 100;
    } else if (rem>=50){
        return 50;
    } else if (rem>=10){
        return 10;
    } else if (rem>=5){
        return 5;
    } else if (rem>=2){
        return 2;
    }else{
        return 1;
    }

}
int numnotes(int amt){
    int ans=0;
    int rem,note;
    while (amt!=0){
        note= noteneed(amt);
        int noom=floor(amt/note);
        ans+=noom ;
        rem=amt%note;
        amt=amt-(noom*note);
    }
    return ans;
}
int main(){
    int n,amt;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>amt;
        int k = numnotes(amt);
        cout<<k<<endl;
    }
    return 0;
}