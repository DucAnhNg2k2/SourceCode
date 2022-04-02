#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ChuyenDaySo(ll a[],ll n){
	ll x = a[0];
	for(int i = 0 ; i < n ; i++ ) a[i] = a[i+1];
	a[n-1] = x;
}
void reset(ll a[],ll n){
	ll x = a[1];
	for(int i = 1 ; i< n ; i++ ){
		a[i] = a[i+1];
	}
	a[n-1] = x;
}
int main(){
	ll n , k;
	cin >> n >> k;
	ll a[n];
	ll max = 0;
	for(int i = 0 ; i < n ; i++ ){
		cin >> a[i];
		if( max < a[i] ) max = a[i];
	}
	if( n <= k-1 ){
		cout << max ;
	}
	else
	{
		int dautien = 0 ;
		int thuhai = 0 ;
		while(true){
			if( a[0] > a[1] ){
				dautien++;
				thuhai = 0;
				reset(a,n);
			}
			else{
				ChuyenDaySo(a,n);
				thuhai++;
				dautien = thuhai;
			}
			if( dautien == k ){
				cout << a[0];
				return 0;
			}
		}
	}
} 
