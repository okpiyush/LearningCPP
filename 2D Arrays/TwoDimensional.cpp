#include <iostream>
using namespace std;


int main(){
    //Making a 2D array of Integer Data type containing the digits 1 to 9 in a pair of 3
    int twoD[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    //iterating through the 2d array
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            cout<<"At array "<<i<<" and the element "<<j<<" is :"<<twoD[i][j]<<endl;
        }
    }

    return 0;
}