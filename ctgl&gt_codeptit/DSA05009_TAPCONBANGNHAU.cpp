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

int n,sum = 0,check = false,a[200];

void Try(int i,int s) {
	if( i > n ) return;
	if( check ) return;
	if( s >= sum ) {
		if( s == sum ) check = true;
		return;
	}
	Try(i+1,s+a[i]);
	Try(i+1,s);
}

void solve() {
	cin >> n;
	sum = 0;
	FOR(i,1,n) {
		cin >> a[i];
		sum += a[i];
	}
	if( sum%2 != 0 ) {
		cout << "NO" << endl;
	}
	else {
		sum /= 2;
		check = false;
		Try(1,0);
		if( check ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
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
