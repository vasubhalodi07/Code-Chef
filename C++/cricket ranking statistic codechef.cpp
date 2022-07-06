#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,r,w,c,r1,w1,c1;
	cin >> t;
	while(t--){
		cin >> r >> w >> c;
		cin >> r1 >> w1 >> c1;
		
		if((r>r1) && (w>w1) || (r>r1)&&(c>c1) || (w>w1)&&(c>c1)){
	        cout<<"A"<<endl;
	    }else{
	        cout<<"B"<<endl;
	    }
	}
	
}
