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
#define all(x) x.begin(),x.end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

vector<vector<int>> f(1005,vector<int>(2005,inf));

void solve() {
	int n;
	cin >> n;
	int a[n+5];
	FOR(i,1,n) cin >> a[i];

	FOR(i,1,n) {
		f[i][0] = a[i] + 1;
		FOR(j,1,a[i]) {
			int x = a[i]/j;
			f[i][x] = min(f[i][x],j);
		}
	}
	int ans = inf;
	FOR(j,1,2000) {
		int sum = 0, check = true;
		FOR(i,1,n) {
			if( f[i][j] == inf ) {
				check = false;
				break;
			}
			sum += f[i][j];
		}
		if( check ) ans = min(ans,sum);
	}
	cout << ans;
}		 

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}