#include <iostream>
using namespace std;
int findme(int a,int b){
    int arr[a],k;
    for (int i = 0; i < a; i++)
    {
        cin>>k;
        arr[i]=k;
    }
    for (int i = 0; i < a; i++)
    {
        if(b==arr[i]){
            cout<<i;
            return i;
            break; 
        }
    }
    cout<<-1;
    
    
};
int main(){
int a,b;
cin>>a>>b;
findme(a,b);
}
