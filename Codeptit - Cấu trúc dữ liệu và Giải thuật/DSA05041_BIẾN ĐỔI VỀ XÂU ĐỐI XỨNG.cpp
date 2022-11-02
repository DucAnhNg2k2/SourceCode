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
	string s;
	cin >> s;
	int n = s.size();
	s = ' ' + s;
	vector<vector<int>> f(105,vector<int>(105,inf));
	FOR(i,1,n) {
		f[i][i] = 0;
	}
	FOR(i,1,n-1) {
		f[i+1][i] = 0;
	}
	FOR(k,1,n-1) {
		FOR(i,1,n-k) {
			int j = i+k;
			if( s[i] == s[j] ) f[i][j] = f[i+1][j-1];
			else {
				f[i][j] = min(f[i][j],f[i+1][j-1]+2);
				f[i][j] = min(f[i][j],f[i+1][j]+1);
				f[i][j] = min(f[i][j],f[i][j-1]+1);
			}
		}
	}
	cout << f[1][n] << endl;
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