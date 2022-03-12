#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
int main(){
	ll x,y,n;
	cin >> x >> y >> n;
	ll l[10] ={0};
	l[1] = x;
	l[2] = y;
	if( l[1] < 0 ) l[1] += mod;
	if( l[2] < 0 ) l[2] += mod;
	for(int i = 3 ; i <=  6 ; i++ ){
		l[i] =  ( l[i-1]%mod - l[i-2]%mod );
		if( l[i] < 0 ) l[i] += mod;
		l[i] %= mod;
	}
	if( n%6 == 0 ) n =6; 
	else n%=6;
	cout << l[n];
} 
