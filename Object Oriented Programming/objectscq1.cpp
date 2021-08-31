#include<iostream>
using namespace std;


class rectangle{
    private:
        int length;
        int breadth;
    public:
        void enter(){
            cout<<"Enter rectangle length";
            cin>>length;
            cout<<"Enter rectangle breadth";
            cin>>breadth;
        }
        void info(){
            cout<<length<< " is the length of Rectangle"<<endl;
            cout<<breadth<< " is the Breadth of Rectangle"<<endl;
        }
        void area(){
            cout<<length*breadth<< " is the Area"<<endl;
        }
        void perimeter(){
            cout<<(2*(length+breadth))<< " is the Perimeter"<<endl;
        }
};

int main(){
    rectangle rectan;
    rectan.enter();
    rectan.info();
    rectan.area();
    rectan. perimeter();
    return 0;
}