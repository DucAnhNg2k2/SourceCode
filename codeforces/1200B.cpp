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
// https://codeforces.com/contest/1200/problem/B
typedef pair<int,int> II;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e12;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	LL n,m,k;
	cin >> n >> m >> k;
	LL a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
	}
	FOR(i,1,n-1) {
		int height = max(0LL,a[i+1]-k);
		m += (a[i]-height);
		if( m < 0 ) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
