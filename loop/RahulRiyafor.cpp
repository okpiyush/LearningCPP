//With some self respect this time 
// It will run for 4 times
#include <iostream>
using namespace std;
int main(){
    bool rejection=false;
    bool selection=false;
    for (int i=0;i<4;i++){
        cout<<"i like you riya";
        int riya;
        cin>>riya;
        if (riya==1){
            cout<<"Hurray"<<endl;
            //relation();
            selection=true;
            break;
        }else if(riya==0){
            cout<<"BC (T-T)"<<endl;
            rejection=true;
            break;
        }else{
            cout<<"I will try again"<<endl;
            continue;
        }
    }
    if(rejection){
        cout<<"Yeah! Let's just move on"<<endl;
    }else if(selection){
        cout<<"Support and Care"<<endl;
    }else{
        cout<<"IDK whatever huh!"<<endl;
    }

    return 0;

}