//28/06/2022
//Blackjack (Program Code : BLACKJACK)
//Link : https://www.codechef.com/submit/BLACKJACK

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		int logic = (21-a-b);
		
		if(logic >= 1 && logic <= 10) {
			cout << logic << endl;
		} else {
			cout << "-1" << endl;
		}
	}
}
