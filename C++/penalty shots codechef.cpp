//penalty shots
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a;
	cin >> t;
	while(t--)
	{
		int arr[10],count=0,count1=0;
		for(int i=0; i<10; i++){
			cin >> arr[i];
			
			if(i % 2 == 0){
				if(arr[i] == 1){
					count++;
				}
			} else {
				if(arr[i] == 1){
					count1++;	
				}
			}
		} 
		if(count > count1){
			cout << "1" << endl;
		} else if(count < count1){
			cout << "2" << endl;
		} else {
			cout << "0" << endl;
		}
	}
}
