#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin,s);
    for(int i = 0 ; i < s.length() ; i++ ){
        if( s[i] >= 'A' && s[i] <='Z') s[i] +=32;
    }
    vector<int> a(300,0);
    string res ="";
    for(int i = 0 ; i < s.length() ; i++ ){
        if( s[i] ==' ') continue;
        if( a[s[i]] < 1 ){
            res += s[i];
        }
        a[s[i]]++;
    }
    int dem = 0 ;
    for(int i = 0 ; i < 300 ; i++ ){
    	if( a[i] > 1 ) dem += a[i];
	}
    cout << dem << ' ' << res << endl;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        solve();
    }
} 
