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
 
void solve()
{
	int n , m;
	cin >> n >> m;
	vl a(n) , b(m) ;
	set<ll> s1, s2 ;
	FOR(0,n)
	{
		cin >> a[i] ;
		s1.insert(a[i]) ;
		s2.insert(a[i]) ;
	}
	set<ll> s ;
	FOR(0,m)
	{
		cin >> b[i] ;
		s1.insert(b[i]) ;
		if( s2.find(b[i]) != s2.end() ) s.insert(b[i]);
	}
	for(set<ll>::iterator i = s1.begin() ; i != s1.end() ; i++ ) cout << *i << ' ';
	cout << endl; 
	for(set<ll>::iterator i = s.begin() ; i != s.end() ; i++ ) cout << *i << ' ';
	cout << endl;
}
int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}
