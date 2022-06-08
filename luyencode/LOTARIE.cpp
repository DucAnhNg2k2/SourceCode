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

void solve() {
	int n;
	cin >> n;
	if( n == 0 ) {
		cout << 0 << endl;
		return;
	}
	vector<char> s(n+5);
	vector<vector<LL>> f(n+5,vector<LL>(5,1e18)); 
	FOR(i,1,n) {
		cin >> s[i];
	}
	f[1][1] = f[1][2] = f[1][3] = 1;
	if(s[1] == 'A') {
		f[1][1] = 0;
	}
	if(s[1] == 'B') {
		f[1][2] = 0;
	}
	if(s[1] == 'C') {
		f[1][3] = 0;
	}
	FOR(i,2,n) { 
		if( s[i] == 'A' ) {
			f[i][1] = min(f[i-1][2],f[i-1][3]);
			f[i][2] = min(f[i-1][1],f[i-1][3])+1;
			f[i][3] = min(f[i-1][1],f[i-1][2])+1;
		}
		else if( s[i] == 'B' ) {
			f[i][1] = min(f[i-1][2],f[i-1][3])+1;
			f[i][2] = min(f[i-1][1],f[i-1][3]);
			f[i][3] = min(f[i-1][1],f[i-1][2])+1;
		}
		else {
			f[i][1] = min(f[i-1][2],f[i-1][3])+1;
			f[i][2] = min(f[i-1][1],f[i-1][3])+1;
			f[i][3] = min(f[i-1][1],f[i-1][2]);	
		}
	}
	cout << min({f[n][1],f[n][2],f[n][3]}) << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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