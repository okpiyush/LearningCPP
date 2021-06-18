#include <iostream>
using namespace std; // namespace std
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        arr[i]=k;
    }
    int s;
    cout<<"what do you want to search for ?";
    cin>>s;
    for (int i=0;i<n;i++){
        if (arr[i]==s){
            cout<<i;
            break;
        }else{
            continue;
        }
    }
}
