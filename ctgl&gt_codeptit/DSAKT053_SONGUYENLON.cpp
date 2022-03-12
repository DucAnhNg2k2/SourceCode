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

void solve() {
	string s1,s2;
	cin >> s1 >> s2;
	int n = s1.size(),m = s2.size();
	LL f[s1.size()+5][s2.size()+5] = {};
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	FOR(i,1,n) {
		FOR(j,1,m) {
			if( s1[i] == s2[j] ) {
				f[i][j] = f[i-1][j-1] + 1;
			}
			else f[i][j] = max(f[i-1][j],f[i][j-1]);
		}
	}
	cout << f[n][m] << endl;
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
