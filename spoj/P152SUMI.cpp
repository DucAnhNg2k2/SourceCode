#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
 
typedef long long ll;
typedef double db;
 
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
   	string s;
   	cin >> s;
   	s = '@' + s;
	int n = s.length() ;
	ll l[n] ;
	l[0] = 0 ;
	int dem = 0 ;
	FOR(1,n-1){
		if( s[i] == s[i+1] ) dem++;
		l[i] = dem ;
	}
	l[n-1] = dem ;
	int t;
	cin >> t;
	while( t-- ){
		int a , b;
		cin >> a >> b;
		cout << l[b-1] - l[a-1] << endl;
	}
}  
