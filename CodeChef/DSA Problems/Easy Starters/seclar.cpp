#include <iostream>

using namespace std;
int seclar(int arr[3]){
    int lar=0;
    int larsec=0;
    for (int i = 0; i < 3; i++)
    {
        if(lar<arr[i]){
            larsec=lar;
            lar=arr[i];
        }else if(arr[i]>larsec){
            larsec=arr[i];
        }
    }
    return larsec;

}
int main(){
    int arr[3],k;
    for (int i = 0; i < 3; i++)
    {
        cin>>k;
        arr[i]=k;
    }
    cout<<seclar(arr)<<endl;
    return 0;
}