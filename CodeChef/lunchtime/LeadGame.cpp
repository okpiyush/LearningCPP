#include <iostream>
using namespace std;
int main() {
	int win,wlead,clead,p1,p2,iter;
    wlead=0;
	cin>>iter;
	for(int i=0;i<iter;i++){
	    cin>>p1>>p2;
	    if (p1>p2){
            clead=abs(p2-p1);
	        if(wlead<clead){
                wlead=clead;
                win=1;
            }else{
                continue;
            }
	    }else if(p2<p1){
	        clead=abs(p2-p1);
	        if(wlead<clead){
                wlead=clead;
                win=2;
            }else{
                continue;
            }
	    }else{
	        continue;
	    }
	}
	
		cout<<win<<" "<<wlead;
	return 0;
}
