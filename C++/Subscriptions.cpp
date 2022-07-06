//28/06/2022
//Subscriptions (Program Code : SUBSCRIBE_ )
//Link : https://www.codechef.com/submit/SUBSCRIBE_ 

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,x;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		
		if(n%6 == 0) {
			cout << ((n/6) * x) << endl;
		} else {
			cout << (((n/6) + 1) * x) << endl;	
		}
	}
}
