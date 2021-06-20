#include <iostream>
using namespace std;

class MyClass{
    public : 
    void myMethod(){
        cout<<"Hello World";
    }
};


int main(){
    MyClass obj;
    obj.myMethod();
    return 0;
}