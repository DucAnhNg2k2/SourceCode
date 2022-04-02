#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
	int t;
	cin >> t;
	while( t-- ){
		double a ;
		cin >> a;
		bool ok = false;
		ll d = 180 , g = 3 ;
		int dem = 50000;
		while( dem-- ){
			if( d == a*g ){
				ok = true;
				break;
			}
			d += 180;
			g++;
		}
		if( ok ) cout <<"YES\n";
		else cout <<"NO\n";
	}
}      
