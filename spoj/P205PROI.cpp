#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
 
typedef vector<ll> vl;
const ll mod = 1e9 + 7;
 
int main()
{
	int n , q;
	cin >> n >> q ;
	vl a(n);
	FOR(0,n)
	{
		cin >> a[i] ;
	}
	sort(a.begin(),a.end());
	while( q-- )
	{
		int l , r;
		cin >> l >> r;
		vl::iterator i , j;
		i = lower_bound(a.begin(),a.end(),l);
		j = upper_bound(a.begin(),a.end(),r);
		cout << j - i << endl;
	}
	
}
 
