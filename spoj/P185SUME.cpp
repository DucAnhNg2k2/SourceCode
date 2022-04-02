// FORM 
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
//   	cin.tie(0);
		int n;
		cin >> n;
		set<ll> s;
		FOR(0,n){
			ll x;
			cin >> x;
			s.insert(x);
		}
		if( s.size() == 0 || s.size() == 1 || s.size() == 2 )
		{
			cout <<"YES";
		}
		else if( s.size() > 3 ) cout << "NO";
		else{
			set<ll>::iterator i = s.begin() ;
			ll x1 = *i;
			i++;
			ll x2 = *i;
			i++;
			ll x3 = *i;
			if( x2 - x1 == x3 - x2 ) cout <<"YES";
			else cout <<"NO";
		}
}     
 
