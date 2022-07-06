/*
	Contest Code:START46D 
	Problem Code:M1ENROL
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
    	if(n <= m) {
			cout << m-n << endl;
		} else {
			cout << 0 << endl;
		}
    }
}
