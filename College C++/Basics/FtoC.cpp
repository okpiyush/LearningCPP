#include <iostream>
using namespace std;
void ctof(){




    return;
}
void ftoc(){






    return;
}
int main(){
    cout<<"What do you want to do ? \nChoose a Number From below"<<endl;
    cout<<"1) Farenhiet to Celcius \n2) Celcius to Farenhiet \n3) Type any number To quit..."<<endl;
    int n;
    double f,c;
    cin>>n;
    if(n==1){
        cout<<"farenhiet ??";
        cin>>f;
        c = (5*(f-32)/9);
        cout<<c<<endl;
    }else if (n==2){
        cin>>c;
        f=((9*c)/5)+32;
        cout<<f<<endl;
    }else {
        cout<<"Calculator turned off"<<endl;
    }





    return 0;
}