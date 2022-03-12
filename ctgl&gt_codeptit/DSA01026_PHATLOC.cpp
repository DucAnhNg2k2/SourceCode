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
#define maxn 100005

int x[maxn],n,stop,a[maxn];
bool vs[maxn] = {};
bool check = false;
int dem = 0;

void Xuat() {
	if( x[1] == 0 ) return;
	if( x[n] == 1 ) return;
	FOR(i,1,n) {
		if( x[i] == 1 && x[i-1] == 1 ) return;
		if( x[i] == 0 && x[i+1] == 0 && x[i+2] == 0 && x[i+3] == 0 ) return;
	}
	FOR(i,1,n) {
		if( x[i] ) cout << "8";
		else cout << "6";
	}
	cout << endl;
}

void Try(int i) {
	for(int j = 0 ; j <= 1 ; j++ ) {
		x[i] = j;
		if( i < n ) Try(i+1);
		else Xuat();
	}	
}


void solve() {
	cin >> n;
	x[n+1] = x[n+2] = -1;
	x[0] = x[n+3] = -1;
	Try(1);
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
