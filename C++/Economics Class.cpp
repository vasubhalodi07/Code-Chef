//29/06/2022
//Economics Class (ECOCLASS)
//Link : https://www.codechef.com/submit/ECOCLASS

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin >> t;
	while(t--) {
		cin >> n;
		int arr[n];
		int arr1[n], count=0;
		
		for(int i=0; i<n; i++) {
			cin >> arr[i];			
		}
		
		for(int i=0; i<n; i++) {
			cin >> arr1[i];
		}
		
		for(int i=0; i<n; i++) {
			if(arr[i] == arr1[i]) {
				count++;
			}
		}
 		cout << count << endl;
	}
}

