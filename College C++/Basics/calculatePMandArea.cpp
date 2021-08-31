#include <iostream>
using namespace std;

int main(){
    string type;
    cout<<"Enter the type of shape you want to find the area and perimeter (square,rectangle,circle)";
    cin>>type;
    if (type=="square")
    {
        float s;
        cout<<"enter the length of the side !"<<endl;
        cin>>s;
        cout<<"Area of the "<<type<<" is "<<s*s<<endl;
        cout<<"Perimeter of the "<<type<<" is "<<(4*s)<<endl;

    }
    else if (type=="rectangle")
    {
        float l,b;
        cout<<"enter the lengths of the l and b of rectangle !"<<endl;
        cin>>l>>b;
        cout<<"Area of the "<<type<<" is "<<l*b<<endl;
        cout<<"Perimeter of the "<<type<<" is "<<(2*(l+b))<<endl;
    }
    else if (type=="circle")
    {
      float s;
        cout<<"enter the length of the Radius !"<<endl;
        cin>>s;
        cout<<"Area of the "<<type<<" is "<<((3.14)*(s*s))<<endl;
        cout<<"Perimeter of the "<<type<<" is "<<(2*(3.14)*s)<<endl;
    }
    else
    {
        cout<<"Enter a Valid Type"<<endl;
    }
    
}