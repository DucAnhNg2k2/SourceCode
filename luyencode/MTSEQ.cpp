#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long mod = 1e9+7;
/*
	a[n]   = 1 2 3 a[n-1] =	1 2 3 a[3]
	a[n-1] = 1 0 0 a[n-2] = 1 0 0 a[2]
	a[n-2] = 0 1 0 a[n-3] = 0 1 0 a[1]

*/
struct Matrix {
	ll a[5][5];
};

Matrix operator *(const Matrix &a,const Matrix &b) {
	Matrix tmp ;
	for(int i = 1 ; i <= 3 ; i++ ) {
		for(int j = 1 ; j <= 3 ; j++ ) {
			ll s = 0;
			for(int k = 1 ; k <= 3 ; k++ ) {
				s = ( s%mod + (a.a[i][k]%mod*b.a[k][j]%mod) )%mod;
				if( s < 0 ) s += mod;
			}
			tmp.a[i][j] = s;
		}
	}
	return tmp;
}

Matrix pow(const Matrix &a,ll b) {
	if( b == 1 ) return a;
	else {
		Matrix tmp = pow(a,b/2);
		if( b&1 ) return a*tmp*tmp;
		else return tmp*tmp;
	} 
}
Matrix dv,a;

long long n;
void solve() {
	cin >> n;
	if( n == 1 ) cout << 1 << ' ';	
	else if( n == 2 ) cout << 2 << ' ';
	else if( n == 3 ) cout << 3 << ' ';
	else {
		Matrix ans = pow(dv,n-3)*a;
		cout << ans.a[1][1] << ' ';
	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	dv.a[1][1] = 3 , dv.a[1][2] = -2 , dv.a[1][3] = 1;
	dv.a[2][1] = 1 , dv.a[2][2] = 0 , dv.a[2][3] = 0;
	dv.a[3][1] = 0 , dv.a[3][2] = 1 , dv.a[3][3] = 0;
	
	a.a[1][1] = 3;
	a.a[2][1] = 2;
	a.a[3][1] = 1;
	int m;
	cin >> m;
	for(int i = 1 ; i <= m ; i++ ) {
		solve();
	}
}
