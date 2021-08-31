#include <iostream>
using namespace std;

class Rectangle
{
  private:
  double area;
  int length;
  int width;
  public:
  Rectangle(double x, double y)// Constructor
  {
    length =x;
    width =y;
  }
  Rectangle(int x, int y) // Constructor
  {
    length=x;
    width =y;
  }
  Rectangle(int x) // Constructor
  {
    length=x;
    width =length;
  }
  ~ Rectangle() // Destruct
  {
    cout<<"\nDestroyed a Rectangle "<<length<<" and "<<width<<endl;
  }
  double showArea() // Member function
  {
    cout<<length*width<<endl;
  }
};


int main(){
    Rectangle r2(1,2),r3(4.20,6.9),r4(4);
    r2.showArea();
    r3.showArea();
    r4.showArea();
    return 0;
}