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
	ll n;
	cin >> n;
	int dem = 0 ;
	FOR(0,n){
		int d;
		cin >> d;
		if( d == 0 ) dem++;
	}
	if( dem != 1) cout <<"NO";
	else cout <<"YES";
}      
