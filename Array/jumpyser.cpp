#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    //input
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        ar[i]=k;
    }
    //selection sorting
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                int temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
        }   
    }
    int s;
    cout<<"what do you want to search";
    cin>>s;
    int end=n;
    int start=0;
    bool ans=false;
    int diff=n/3;
    for (int i=0;i<n;i+=diff){
        if (s>ar[i]){
            start=i;
        }else if(s<ar[i]){
            end=i;
            break;
        }else if(s==ar[i]){
            cout<<i;
            ans=true;
            break;
        }else{
            continue;
        }
    }
    if(!ans){
        for (int i=start;i<end;i++){
            if (s==ar[i]){
                cout<<i;
                ans=true;
                break;
            }else{
                continue;
            }
        }
    }
    if(ans){
        cout<<endl;
        cout<<"Above is the index for the following search";
    }else{
        cout<<"Element not in the array";
    }
    return 0;
}