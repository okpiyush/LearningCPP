#include <iostream>
using namespace std;
int main(){
    string food = "Pizza"; // Sets value of the variable as pizza
    string &meal = food; //sets the value of food to the given memory reference
    cout<<&meal<<endl; //Gives out memory address of the the variable
}