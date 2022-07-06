//30/06/2022
//Score High (HIGHSCORE)
//Link : https://www.codechef.com/submit/HIGHSCORE

#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--) {
	    cin >> n;
	    int arr[4], x=0;
	    for(int i=0; i<4; i++) {
	        cin >> arr[i];
	    	x = max(arr[i], x);
	    }
	    cout << x << endl;
	}	
	return 0;
}

