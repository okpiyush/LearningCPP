#include <iostream>
#include<math.h>
using namespace std;
int main() {
  //armstrong number;
  int ig,lastdig,sum;
  cin>>ig;
  int og=ig;
  sum=0;
  while (ig>0){
      lastdig=ig%10;
      sum=sum+(lastdig*lastdig*lastdig);
      ig=ig/10;
      cout<<ig<<" "<<sum<<endl;
  }
if (sum==og){
    cout<<"Armstrong Number";
}else{
    cout<<"NOT Armstrong Number";
}
}