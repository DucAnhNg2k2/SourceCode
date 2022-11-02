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

vector<vector<LL>> tohop(const int &n) {
	vector<vector<LL>> a(n+5,vector<LL>(n+5,0));
	LL cot = 1;
	for(LL i = 1 ; i <= n ; ++i ) {
		for(LL j = 1 ; j <= cot ; ++j ) {
			if( j == 1 ) a[i][j] = i;
			else if( j == cot ) a[i][j] = 1;
			else {
				a[i][j] = a[i-1][j] + a[i-1][j-1];
				a[i][j] %= MOD;
			}
		}
		cot++;
	}
	return a;
}

vector<vector<LL>> ans;
void solve() {
	int n,k;
	cin >> n >> k;
	cout << ans[n][k] << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	ans = tohop(1005);
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
