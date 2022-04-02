#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
void solve(){
	int n;
	cin >> n;
	ll a[n], b[n];
	FOR(0,n) cin >> a[i];
	FOR(0,n) cin >> b[i];
	sort(a,a+n);
	sort(b,b+n);
	FOR(0,n){
		if( a[i] > b[i] ){
			cout <<"NO\n";
			return ;
		}
	}
	cout <<"YES\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
	int t;
	cin >> t;
	while( t-- ){
		solve();
	}
}    
