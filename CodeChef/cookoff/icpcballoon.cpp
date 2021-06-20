#include <iostream>
using namespace std;
int main(){
    int n,k,in;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        int count=7;
        int arr[k];
        for (int j = 0; j < k; j++)
        {
            cin>>in;
            arr[j]=in;
        }
        for (int j = 0; j < k; j++)
        {
            if(arr[j]<=7){
                count-=1;
            }
            if(count==0){
                cout<<j+1<<endl;
                break;
            }
        }
        
    }
}