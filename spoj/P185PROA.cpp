#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int j = 0 ;
    if( s[0] == '9') j++;
   	for(int i = j ; i < s.length() ; i++ ){
   		int so = (int)(s[i]-'0');
   		so = min(so,9-so);
   		s[i] = (char)(so+'0');
	}
	cout << s << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
