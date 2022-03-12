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
#define maxn 1000005

int ans,vs[maxn];
void Try(int n,int dem) {
	if( vs[n] <= dem ) {
		return;
	}
	vs[n] = dem;
	if( n == 1 ) {
		ans = min(ans,dem);
		return ;
	}
	if( n%2 == 0 ) Try(n/2,dem+1);
	if( n%3 == 0 ) Try(n/3,dem+1);
	Try(n-1,dem+1);
}

void solve() {
	FO(i,1,maxn) {
		vs[i] = inf;
	}
	int n;
	cin >> n;
	ans = inf;
	Try(n,0);
	cout << ans << endl;
}

int main(){
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

