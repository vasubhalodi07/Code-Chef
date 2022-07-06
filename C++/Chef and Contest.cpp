//28/06/2022
//Chef and Contest (CHEFCONTEST)
//Link : https://www.codechef.com/submit/CHEFCONTEST

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,x,y,p,q;
	cin >> t;
	while(t--) {
		cin >> x >> y >> p >> q;		
		if(x+(p*10) < y+(q*10)) {
			cout << "Chef" << endl;
		} else if (x+(p*10) > y+(q*10)) {
			cout << "Chefina" << endl;
		} else {
			cout << "Draw" << endl;
		}
	}
}

