#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  	ll n;
  	cin >> n;
  	set<ll> s;
  	FOR(0,n){
  		ll x;
  		cin >> x;
  		s.insert(x);
	}
	vector<ll> a;
	for(set<ll>:: iterator i = s.begin() ; i!= s.end() ; i++ ){
		a.push_back((*i));
	}
	bool ok = false;
	// th1 
	if( a.size() == 1 || a.size() == 2) ok = true;
	else if( a.size() >=4  ) ok = false;
	else{
		if( a[2] - a[1] == a[1] - a[0] ) ok = true;
	} 
	if( ok ) cout <<"YES";
	else cout <<"NO";
}  
