// FORM 
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
typedef vector<ll> vll ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
 
const ll mod = 1e9+7;
 
main()
{
   ios_base::sync_with_stdio(0);
   // cin.tie(0);
	int n;
	cin >> n;
	msi m;
	string s;
	FOR(0,n){
		cin >> s;
		m[s]++;
	}
	if( m.size() == 1 ){
		cout << s;
		return 0;
	}
	msi::iterator i = m.begin();
	msi::iterator j = i;
	j++;
	if( (*i).second > (*j).second ) cout << (*i).first ;
	else cout << (*j).first ;
}     
