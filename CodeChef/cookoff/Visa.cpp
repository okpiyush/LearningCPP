#include <iostream>
using namespace std;
int checkvisa(int aa,int a,int bb,int b,int cc,int c){
    if(aa<=a&&bb<=b&cc>=c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
};
int main(){
    int n,x1,x2,y1,y2,z1,z2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin >>x1>>x2>>y1>>y2>>z1>>z2;
        checkvisa(x1,x2,y1,y2,z1,z2);
    }
    
    return 0;
}