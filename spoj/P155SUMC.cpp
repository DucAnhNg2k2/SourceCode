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
ll abs(ll a ,ll b ){
	ll s = a - b;
	if( s >=0 ) return s;
	else return -s;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n ;
	cin >> n;
	string s , s1 ;
	cin >> s >> s1 ;
	ll index = -1;
	FOR(0,min(sz(s),sz(s1))){
		if( s[i] != s1[i] ){
			index = i;
			break;
		}
	}
	if( index == -1 ){
		int d = abs(sz(s),sz(s1));
		if( d <= n  ) cout <<"YES";
		else cout <<"NO";
	}
	else{
		int d =( sz(s)-index ) + ( sz(s1)-index );
		if( d <= n  ) cout <<"YES";
		else cout <<"NO";
	}
}   
