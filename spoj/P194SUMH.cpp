// FORM 
#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
 
ll Tich(ll n){
	ll s = 1;
	while( n > 0 ){
		s *= n%10;
		n/=10;
	}
	return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
//   	cin.tie(0);
  	ll n;
  	cin >> n;
  	if( n == 1 ){
  		cout << 1;
  		return 0;
	  }
  	bool ok = false;
  	for(ll i = 0 ; i < 1000000 ; i++ ){
  		if( Tich(i) == n ){
  			cout << i;
  			ok = true;
  			break;
		}
	}
	if ( ok == false ) cout << -1 ; 
}      
