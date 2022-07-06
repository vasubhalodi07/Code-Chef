#include<bits/stdc++.h>
using namespace std;
 
int gcd(int x, int y){
    int r = 0, a, b;
    a = (x > y) ? x : y;
    b = (x < y) ? x : y;
 
    r = b;
    while (a % b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
 
int lcm(int x, int y){
    int a;
    a = (x > y) ? x : y;
    while (true){
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}
 
int main(int argc, char **argv)
{
	int t,n;
	cin >> t;
	while(t--){		
		int x, y;
		cout << "Enter Two Digits : ";
		cin >> x >> y;
		
		cout << gcd(x,y) << endl;
		
	    cout << lcm(x, y) - gcd(x, y) << endl;
	}
    return 0;
}

