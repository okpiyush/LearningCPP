#include <iostream>
using namespace std;
int add(int x , int y){
    return x+y;
}
double add(double x,double y){
    return x+y;
}

int main(){
    int mynum=add(6,7);
    double mydoub=add(6.78,7.62);
    cout<<"Integer : "<<mynum<<endl;
    cout<<"Double : "<<mydoub<<endl;
    return 0;
}