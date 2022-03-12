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
	int n,m;
	cin >> n >> m;
	int tong = 0;
	if ( n % 2 == 1 ){
		tong += n / 2 + 1;
	}
	else{
		tong += n / 2;
	}
	for ( int i = 1 ; ; i++ ){
		if ( tong % m == 0 ) break;
		tong++;
	}
	cout << tong;
} 
