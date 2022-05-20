#pragma GCC optimize("O2")
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
const int IMAX = 1e9;
const LL LMAX = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

bool check(string s,int l,int r) {
	for(int i = l, j = r; i <= j ; i++,j--) {
		if(s[i] != s[j]) return false;
	}
	return true;
}
void solve() {
	string s;
	cin >> s;
//	cout << s << endl;
	int n = s.size();
	s = ' ' + s;
	bool f[n+5][n+5] = {};
	FOR(i,1,n) {
		FOR(j,i,n) {
			if(check(s,i,j)) f[i][j] = true;
			else f[i][j] = false;
			f[j][i] = f[i][j];
		}
	}
	vector<int> dp(n+5,IMAX);
	dp[0] = 0;
	FOR(i,1,n) {
		FOR(j,1,i) {
			if(f[j][i]) dp[i] = min(dp[i],dp[j-1]+1);
		}
	}
	cout << dp[n] << endl;
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