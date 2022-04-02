#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
 
typedef long long ll;
typedef double db;
 
void solve(){
	string s1 ,s2;
	cin >> s1 >> s2;
	while( s1.size() < s2.size() ) s1 = '0' + s1;
	while( s2.size() < s1.size() ) s2 = '0' + s2;
	string res = "";
	int nho = 0 ;
	for(int i = s1.size() - 1 ; i >=0 ; i-- ){
		int so = (int)(s1[i]-'0') + (int)(s2[i]-'0') + nho;
		if( so >= 10 ){
			res = (char)(so%10+'0') + res;
			nho = 1;
		}
		else{
			res = (char)(so+'0') + res;
			nho = 0 ;
		}
	}
	if( nho == 1 ) res = '1' + res;
	cout << res << endl; 
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   	int t;
   	cin >> t;
   	while( t-- ){
   		solve();
	}
}  
