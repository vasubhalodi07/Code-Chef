#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	
	cout << "Test Case : ";
	cin >> t;
	while(t--) {
		cout << "Length Of String : ";
		cin >> n;
		char arr[n];
		
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			
			if(arr[i] == 'A')
			{
				cout << "T";
			}
			else if(arr[i] == 'T')
			{
				cout << "A";
			}
			else if(arr[i] == 'C')
			{
				cout << "G";
			}
			else if(arr[i] == 'G')
			{
				cout << "C";
			}
		}
	}
	return 0;
} 
