#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x;
	char c,n,d;
	
	cin >> t;
	while(t--){
		cin >> x;
		int count=0,count1=0,count2=0;
		char arr[14];
		for(int i=0; i<14; i++){
			cin >> arr[i];
						
			if(arr[i] == 'C'){
				count++;
			} else if(arr[i] == 'D'){
				count1++;
			} else {
				count2++;
			}
		}
		
		int a,b,p,q;
		if(count == count2){
			cout << "Draw Match : " <<  55*x << endl;
		} 
		else if(count > count2) 
		{
			a = (2*count) + (1*count2);
			b = (0*count1) + (1*count2);
			
			if(a > b)
			{
				cout << "Win Carlsen : " <<60*x << endl;
			}
		} else {
			cout << "Win Chef : " 40*x << endl;
		}
	
		cout << "C = " << count << endl;
		cout << "D = " << count1 << endl;
		cout << "N = " << count2 << endl;
	}
}

// 14 classical games
// chef and carslen
//three outcome - won carlsen, won chef, draw
// winner - 2, loser - 0, draw - 1(both player)
// price = 100, more than points (60), lose (40)
// win - 55, lose - 45 of X



