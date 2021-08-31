#include <iostream>
using namespace std;
class car{
    public : 
    int speed(int maxSpeed);
};
int car::speed(int maxSpeed){
    return maxSpeed;
}

int main(){
    car myobj;
    cout<<myobj.speed(450);return 0;
}