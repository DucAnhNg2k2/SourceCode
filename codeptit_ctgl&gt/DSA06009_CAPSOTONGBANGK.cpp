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
#define all(x) (x).begin(),(x).end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 1000005

void solve() {
	int n,k;
	cin >> n >> k;
	LL dd[10005] = {},cnt = 0;
	FOR(i,1,n) {
		LL x;
		cin >> x;
		dd[x]++;
	}
	FOR(i,0,k) {
		if( i*2 == k ) {
			cnt += ( dd[i]*(dd[i]-1) )/2;
		}
		else cnt += dd[i]*dd[k-i];
		dd[i] = 0, dd[k-i] = 0;
	}
	cout << cnt << endl;
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
