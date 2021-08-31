#include <iostream>
using namespace std;


int main(){
    char i[3][100];
    for(int j=0;j<3;j++){
        cin.getline(i[j],100);
    }
    for(int j=0;j<3;j++){
        cout<<i[j]<<endl;//prints the array of the element
    }
    for (int j=0;j<3;j++) { 
        for(int k=0;k<4;k++){
            cout<<i[j][k]<<endl;//refers to a particular character of an array
        }
    }
    return 0; 
}