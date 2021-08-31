#include <iostream>
using namespace std;



//remarks (Didnt answer clear the test cases)
int gcf(int a, int b){
    int ans;
    int rem;
    while (rem!=0){
        rem=b%a;
        if(rem!=0){
            b=a;
            a=rem;
        }
    }
    ans=a;

    return ans;
}
int lcm(int a, int b,int gcd){
    int ans;
    ans=(a*b)/gcd;
    return ans;
}
int main(){
    int a,b,n;
    cin >>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        int k= gcf(a,b);
        int j = lcm(a,b,k);
        cout<<k<<" "<<j<<endl;
    }

}