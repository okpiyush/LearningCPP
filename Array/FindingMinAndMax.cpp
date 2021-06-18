#include <iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Give us a Size of Array"<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        int k;
        cout<<"Enter a Number"<<endl;
        cin>>k;
        array[i]=k;
    }
    int min,max,temp;
    min=INT_MAX;
    max=INT_MIN;
    for(int i=0;i<n;i++){
        temp=array[i];
        if (temp>max){
            max=temp;
        }
    }
    cout<<max<<endl;
    for(int i=0;i<n;i++){
        temp=array[i];
        if (temp<min){
            min=temp;
        }
    }
    cout<<min<<endl;
    return 0;

}