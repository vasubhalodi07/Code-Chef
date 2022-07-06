#include <iostream>
using namespace std;

int main() 
{
	int t,x,y,n;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		cin >> n >> x >> y;
		int arr[n],oc=0,p=0,z;
		for(int i=0; i<n; i++)
		{	
			cin >> arr[i];
			oc = oc + arr[i];
			
			if(arr[i]-y >= 0){
				p = p + (arr[i] - y);
			}
			z = p + x;
		}
		
		if(z < oc){
			cout << "COUPON" << endl;
		} else {
			cout << "NO COUPON" << endl;
		}
	}
	return 0;
}

