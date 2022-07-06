#include <iostream>
using namespace std;

int main() {
    int n,h,x;
    cin >> n >> h >> x;
    int arr[n], count=0;
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	
    	if(x+arr[i] >= h){
    		count++;
		} 
	}
	if(count > 0){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

