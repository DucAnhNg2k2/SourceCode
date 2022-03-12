#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
typedef priority_queue<ll> Queue;
typedef vector<ll> vl ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
const ll mod = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n , k ;
	cin >> n >> k;
	ll a[n];
	FOR(0,n) cin >> a[i];
	sort(a,a+n);
	if( k == 0 ){
		if( a[0] == 1 ) cout << -1 ;
		else cout << 1 ;
	}
	else if ( k == n ){
		cout << a[k-1] ;
	}
	else {
		ll data = a[k-1] ;
		if( data == a[k] ) cout << -1;
		else cout << data ;
	}
}     
