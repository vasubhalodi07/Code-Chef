#include <iostream>
using namespace std;
 
int main()
{
    int i,num;
    int size;
 
    cout<<"Enter elements array: ";
    cin >> size;
    
    int arr[size];
    
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number of times to right rotate: ";
    cin>>num;
 
    num = num % size;
 
    for(i=1; i<=num; i++)
    {
        int last;
	    last = arr[size - 1];
	 
	    for(i=size-1; i>0; i--)
	    {
	        arr[i] = arr[i - 1];
	    }
	    arr[0] = last;
    }
 
    cout<<"\nArray after rotation\n"<<endl;
    
    for(i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
 
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
	
		int c,last;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			last = arr[i];
 		}
 		
 		int first = last%10;
 		for(first=last; first>=10; first=first/10);
 		
 		cout << first << endl;
 		cout << last << endl;
 	
	}
}
