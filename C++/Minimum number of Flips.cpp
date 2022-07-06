//28/06/2022
//Minimum number of Flips (Program Code : MINFLIPS)
//Link : https://www.codechef.com/submit/MINFLIPS

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin >> t;
	for(int i=0; i<t; i++) {
		cin >> n;
		int arr[n], sum=0;
		
		for(int i=0; i<n; i++) {
			cin >> arr[i];	
			sum = sum + arr[i];
		}

		if(n%2 == 0) {
			cout << abs((sum) - (sum/2)) << endl;
		} else if (n%2 != 0) {
			cout << "-1" << endl;
		} else {
			cout << "0" << endl;
		}
	}
}
