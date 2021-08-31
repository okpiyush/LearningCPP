#include <iostream>
using namespace std;
bool checkPrime(int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main() {
	int t,k;
	cin>>t;
	if(t>0&&t<=20){
	    for (int i=0;i<t;i++){
	      cin>>k;
	      if(checkPrime(k)){
	            cout<<"yes"<<endl;
	        }else{
	            cout<<"no"<<endl;
	        }
	    }
	}
	return 0;
}
