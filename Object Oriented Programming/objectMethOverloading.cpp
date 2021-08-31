#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int width;
    //case no answers
    void setDimensions(){
        length = 0;
        width = 0;
    }
    //case rectangle
    void setDimensions(int l,int w){
        length = l;
        width = w;
    }
    //special case square
    void setDimensions(int s){
        length = s;
        width = s;
    }
    void getDimensions(){
        cout<<"Length : "<<length<<endl;
        cout<<"Width : "<<width<<endl;
    }


};


int main(){
    rectangle rect;
    rect.setDimensions();
    rect.getDimensions();
    rect.setDimensions(15);
    rect.getDimensions();
    rect.setDimensions(15,20);
    rect.getDimensions();
    return 0;
}