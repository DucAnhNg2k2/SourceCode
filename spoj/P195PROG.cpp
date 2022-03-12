#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
typedef priority_queue<ll> Queue;
typedef vector<ll> vll ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
ll Bs(ll a[],ll n,ll x){
	ll l = 0 , r = n ;
	while( l < r ){
		ll m = (l+r)/2;
		if( a[m] > x ) r = m;
		else l = m+1;
	}
	return r-1;
}
ll C(ll n){
	return n*(n-1)*(n-2)/6;
}
const ll mod = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n , d;
	cin >> n >> d;
	ll a[n];
	FOR(0,n) cin >> a[i];
	sort(a,a+n);
	ll sum = 0 ;
	int tmp = 0 ;
	FOR(0,n){
		ll h = Bs(a,n,a[i]+d);
		if( tmp-i+1 >= 3 ) sum -= C(tmp-i+1);
		if( h-i+1 >= 3 ) sum += C(h-i+1);
		if( tmp < h ) tmp = h ;
	}
	cout << sum ;
}     
