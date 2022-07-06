#include <iostream>
using namespace std;

int main() {
    int t,t1;
    cin >> t;
    while(t--){
        cin >> t1;
        int temp=0,a=0,n1=0;
        temp = t1;
    
    	while(t1 != 0) 
		{
		    a = t1 % 10;
		    n1 = n1 * 10 + a;
		    t1 /= 10;
  		}
		
		cout << temp << " " << n1 << endl;
  		if(temp == n1){
			cout << "wins" << endl;
		} else {
			cout << "loses" << endl;
		}
    }
	return 0;
}

