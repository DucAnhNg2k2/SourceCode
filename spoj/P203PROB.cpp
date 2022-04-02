#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const n = 1e7; 
long long s = 0;
vector<ll> minPrime(1e7+1,0);
void PhanTichSo(){
	for(ll i = 2; i*i <= n ; ++i ){
		if( minPrime[i] ==0 ){
			for(ll j = i*i ; j <= n ;j +=i){
				if(minPrime[j] == 0 ){
					minPrime[j] = i;
				}
			}
		}
	}
	for(ll i = 2 ; i<= n; ++i){
		if(minPrime[i] ==0 ){
			minPrime[i] = i;
		}
	}
}
ll SUM(int a){
	ll s = 0;
	while( a!= 1){
		s += minPrime[a];
		a /= minPrime[a];
	}
	return s;
}
int main(){
	ios_base::sync_with_stdio(false);
	PhanTichSo();
	long long sum = 0;
	int t;
	cin >> t;
	while( t-- ){
		ll a;
		cin >> a;
		sum += SUM(a);
	}
	cout << sum ;
} 
