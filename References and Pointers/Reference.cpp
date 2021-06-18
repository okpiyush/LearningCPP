#include <iostream>
using namespace std;
int main(){
    string food = "Pizza"; // Sets value of the variable as pizza
    string &meal = food; //sets the value of food to the given memory reference
    cout<<food<<endl; //This also gives out pizza
    cout<<meal<<endl;//this gives out Pizza
}