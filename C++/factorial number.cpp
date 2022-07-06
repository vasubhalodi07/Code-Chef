#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,N;
    cin >> t;
    while(t--)
	{
		int fact=1;
        cin >> N;
        for(int i=N; i>=1; i--)
		{
            fact = fact * i;
        }
        cout << fact << endl;
    }
}
