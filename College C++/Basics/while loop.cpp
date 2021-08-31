#include<iostream>
using namespace std;
int main() {
    int sumOdd=0;
    int sumEven=0;
    int upperbound=20;
    int absdiff;
    int number=1;
    while (number<=upperbound)
    {
        if (number%2==0)
        {
            sumEven+=number;
            number+=1;
            /* code */
        }else{
            sumOdd+=number;
            number+=1;
        }
    }
    absdiff=sumEven-sumOdd;
    cout<<sumEven<<"-"<<sumOdd<<"="<<absdiff<<endl;
    return 0;
}