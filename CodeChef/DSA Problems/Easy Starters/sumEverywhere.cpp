#include <iostream>
using namespace std;

long oddsum(long n){
    long k=1;
    long sum=0;
    for(long i=0;i<n;i++){
        sum=sum+k;
        k+=2;
    }
    cout<<sum<<" ";
    return 0;
}
long evensum(long n){
    long k=2;
    long sum=0;
    for(long i=0;i<n;i++){
        sum=sum+k;
        k+=2;
    }
    cout<<sum;
    return 0;
}


int main() {
	long n;
	cin>>n;
	oddsum(n);
	evensum(n);
	return 0;
}
