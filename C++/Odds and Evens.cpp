//28/06/2022
//Odds and Evens (Program Code : ODDSEVENS)
//Link : https://www.codechef.com/submit/ODDSEVENS

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b;
	cin >> t;
	
	while(t--) {
		cin >> a >> b;

		string i = ((a+b)%2==0) ? "Bob" : "Alice";
		cout << i << endl; 
	}	
}
