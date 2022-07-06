#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,N,A;
    cin >> t;
    for(int i=0; i<t; i++)
    {
    	cin >> N;
	    int arr[N], count=0;
	    for(int i=0; i<N; i++)
		{
	    	cin >> arr[i];
	    	if(arr[i] >= 10 && arr[i] <= 60)
			{
	    		count++;
			}
		}	
		cout << count << endl;
	}
}

