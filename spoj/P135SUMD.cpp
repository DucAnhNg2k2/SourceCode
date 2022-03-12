#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int size = 0;
int main(){
	ll n;
	cin >> n;
	if( (int)(log(n)/log(2)) == log(n)/log(2) ){
		cout << n << ' ' << 0 ;
		return 0 ;
	}
	ll s ;
	for(int i = 0 ; ; i++ ){
		s = pow(2,i);
		if ( s > n ) break;
	}
	while( true ){
		ll tmp = s;
		ll d = n;
		ll dem = 0 ;
		while( true ){
			if( tmp == 1 ) break;
			tmp /= 2;
			if( d >= tmp ) d-=tmp;
			dem++;
			if( d == 0 ){
			cout << s << ' ' << dem ;
			return 0;
			}
		}
		if( d == 0 ){
			cout << s << ' ' << dem ;
			return 0;
		}
		s*=2;
	}
} 
