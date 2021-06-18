#include <iostream>
#include <climits>
#include <math.h>
#include <cmath>
using namespace std;
int main(){
    //using min function
    //using max function
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
    min=min(temp,array[i]);
    cout<<min<<endl;
    return 0;
}