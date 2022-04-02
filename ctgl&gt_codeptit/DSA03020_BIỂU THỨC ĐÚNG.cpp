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
#define maxn 100005

void solve() {
	string s;
	cin >> s;
	int n = s.size();
	s = ' ' + s;
	int dem1 = 0, dem2 = 0,ans = 0;
	FORD(i,n,1) {
		if( s[i] == '[') {
			dem1++;
			if(dem2>0) {
				dem1--;
				dem2--;
			}
		}
		else {
			dem2++;
			if(dem1>0) {
				ans += dem1;
				dem1--;
				dem2--;
			}
		}
	}
	cout << ans << endl;
}

int main() {
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
