//There are many data types in CPP
#include <iostream>
using namespace std;
int main(){
    //assigning a data type 
    //unlike python and js, here the variables are not dynamic
    //Dynamic variable : Changes it self according to the data it has been assigned
    //Hence we have to define it ourselves before use
    int a ;//a is int
    double b;//b is double or number with a decimal value
    string c;//c is string or a set of words in a sentence
    char d;//d is character
    bool e;//e is Boolean
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
    
    //how to assign multiple data types at once
    int i1,i5;
    i1=2;
    i5=26;
    
    //inline assigning
    int i6=10;
    return 0;
}