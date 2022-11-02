#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005


int x[25],n = 5,a[10],N = 4,X[25];
bool vs[25] = {},check;

void Xuat1() {
	int pos = 1;
	LL ans = a[x[pos]];
	FOR(i,1,N) {
		if( X[i] == 0 ) {
			ans += a[x[++pos]]; 
		}
		else if( X[i] == 1 ) {
			ans *= a[x[++pos]];
		}
		else {
			ans -= a[x[++pos]];
		}
	}
	if( ans == 23 ) {
		check = true;
	}
}

void Try1(int i) {
	for(int j = 0 ; j <= 2 ; j++ ) {
		X[i] = j;
		if( i < N ) Try1(i+1);
		else Xuat1();
	}	
}

void Xuat() {
	Try1(1);
}

void Try(int i) {
	for(int j = 1 ; j <= n ; j++ ) {
		if( vs[j] == false ) {
			vs[j] = true;
			x[i] = j;
			if( i < n ) Try(i+1);
			else Xuat();
			vs[j] = false;
		}
	}
}

void solve() {
	check = false;
	FOR(i,1,5) {
		cin >> a[i];
	} 
	Try(1);
	if( check ) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
