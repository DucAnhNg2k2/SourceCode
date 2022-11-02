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

void solve() {
	int n,m,q;
	cin >> n >> m >> q;
	char s1[n+5],s2[m+5],s3[q+5];
	FOR(i,1,n) cin >> s1[i];
	FOR(i,1,m) cin >> s2[i];
	FOR(i,1,q) cin >> s3[i];
	int f[n+5][m+5][q+5] = {};
	FOR(i,1,n) {
		FOR(j,1,m) {
			FOR(k,1,q) {
				if(s1[i]==s2[j]&&s2[j]==s3[k]) {
					f[i][j][k] = f[i-1][j-1][k-1]+1;
				}
				else {
					f[i][j][k] = max({f[i][j][k-1],f[i-1][j][k],f[i][j-1][k]});
				}
			}
		}
	}
	cout << f[n][m][q] << endl;
}

int main(){
    ios::sync_with_stdio(false);
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
