#include <iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    //linear search{}
    cout<<"what do you want to search in here ?";
    int s;
    cin>>s;
    bool res;
    for (int i=0;i<9;i++){
        if(s==arr[i]){
            cout<<i<<" is the index of the required number"<<endl;
            res=true;
            break;
        }
    }
    if(res){
        cout<<endl;
    }else{
        cout<<"Not Found";
    }

}