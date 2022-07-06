//29/06/2022
//Airline Restrictions (AIRLINE)
//Link : https://www.codechef.com/submit/AIRLINE

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b,c,d,e;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c >> d >> e;
		if(a+b <= d && c <= e || a+c <= d && b <= e || b+c <= d && a <= e) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

