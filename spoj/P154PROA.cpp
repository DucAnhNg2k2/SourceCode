#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod;
ll Nhan(ll a ,ll b ){
	if( b==0 ) return 0ll;
	ll tmp = Nhan(a,b/2);
	if( b%2 == 0 ) return (tmp%mod * 2%mod)%mod;
	else return ((tmp%mod*2%mod)%mod + a%mod)%mod;
}
ll power(ll a,ll b ){
	if ( b == 0 ) return 1;
	ll tmp = power(a,b/2);
	ll res = Nhan(tmp,tmp);
	if ( b%2 == 0 ) return res%mod;
	else return Nhan(res,a)%mod;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		ll a,b;
		cin >> a >> b >> mod;
		cout << power(a,b) << endl;
	}
} 
