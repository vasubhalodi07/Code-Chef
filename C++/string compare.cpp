#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, t, m = "";
        cin >> s >> t;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == t[i]) {
                m = m + "G";
            } else {
                m = m + "B";
            }
        }
        cout << m << endl;
    }
}
