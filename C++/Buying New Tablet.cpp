//29/06/2022
//Buying New Tablet (TABLET)
//Link : https://www.codechef.com/submit/TABLET

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,b,w,h,p;
	cin >> t;
	while(t--) {
		cin >> n >> b;
		int count=0, mul;
		for(int i=0; i<n; i++) {
			cin >> w >> h >> p;
			if(b >= p) {
				mul = w * h;
				count = max(mul, count);
			}
		}
		if(count == 0) {
			cout << "no tablet" << endl;
		} else {
			cout << count << endl;
		}
	}
}
