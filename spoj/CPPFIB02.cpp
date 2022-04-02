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
const ll mod = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll l[100];
	l[0] = 0;
	l[1] = 1;
	FOR(2,93){
		l[i] = l[i-1] + l[i-2];
	}
	int t;
	cin >> t;
	while( t-- ){
		ll n;
		cin >> n;
		bool ok = false;
		FOR(0,93)
		{
			if( l[i] == n ) ok = true;
		}
		if( ok ) cout <<"YES";
		else cout <<"NO";
		cout <<'\n';
	}
}     
