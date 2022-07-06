#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,i;
        cin >>a;
        char n[a];
        for(i=0;i<a;i++){
            cin >> n[i];
        }
        for(i=0;i<a;i=i+2)
		{
            if(n[i]=='0'&& n[i+1]=='0')
			{
                cout << "A";
            }
			else if(n[i]=='0'&& n[i+1]=='1')
			{
                cout<<"T";
            }
			else if(n[i]=='1'&& n[i+1]=='0')
			{
                cout << "C";
            }
			else
			{
                cout << "G";
            }        
        }
        cout << endl;
    }
}
