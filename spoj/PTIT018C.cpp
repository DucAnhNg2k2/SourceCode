#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// T?≠nh a chia d∆∞ cho m
ll A_MOD_M(string a,ll m){
	ll s = 0;
	for(int i = 0 ; i < a.length() ; i++ ){
		s = s*10 + (int)(a[i]-'0');
		s %= m;
	}
	return s;
}
 
// T?≠nh a^b chia d∆∞ cho m
ll POWMOD(string a,ll b, ll e){
	if( b== 0 ) return 1;
	if( b== 1 ) return A_MOD_M(a,e);
	else{
		ll p = POWMOD(a,b/2,e);
		if( b%2 == 0 ) return ( p%e * p%e ) %e;
		else return ( ( p%e * p%e )%e * A_MOD_M(a,e) ) %e;
	}
}
void solve(){
	string a;
	cin >> a;
	ll b , m;
	cin >> b >> m ;
	cout << POWMOD(a,b,m) << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- ){
		solve();
	}
}
 
