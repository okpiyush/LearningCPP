#include <iostream>
using namespace std;
//simple sorting in array
int main() {
    int n;
    cout<<"Enter the length of the array";
    cin>>n;
    int arr[n];
    //taking input
    for(int i=0;i<n;i++){
        int k; 
        cin>>k;
        arr[i]=k;
    }
    //Sorting
    //Selection Sort
    //Sort One by One 
    //ie. pick a element and then select to send it
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }






    ///////////////////////////////////////////////////////////////////////////
   /* It Didn't work
    //sorting algo
    for (int i=0;i<n;i++){
        int temp=array[i];
        for (int j=0;j<n;j++){
            if (temp>array[j]){
                array[i]=array[j];
                array[j]=temp;
                for(int i=0;i<n;i++){
                    cout<<array[i]<<" ";
                }
            cout<<endl;   

            }
        }
    }
   
   */
    //printing Output sorted array
    
    return 0;
}