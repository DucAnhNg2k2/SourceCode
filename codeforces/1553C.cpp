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
// https://codeforces.com/problemset/problem/1553/C
typedef pair<int,int>II;
typedef pair<LL,LL>pLL;
typedef vector<int> vi;
typedef vector<LL> vll;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007LL;
#define maxn 10005

void solve() {
	string s;
	cin >> s;
	int n = s.size();
	s = ' ' + s;
	pair<II,int> dp1,dp2;
	dp1.fi.fi = dp1.fi.se = 0;
	dp2.fi.fi = dp2.fi.se = 0;
	dp1.se = dp2.se = 5;
	FOR(i,1,n) {
		if( i&1 ) {
			if( s[i] == '1' ) {
				dp1.fi.fi++;
				dp1.fi.se++;
			}
			else if( s[i] == '?' ) {
				dp1.fi.fi++;
			}
			dp1.se--;
		}
		else {
			if( s[i] == '1' ) {
				dp2.fi.fi++;
				dp2.fi.se++;
			}
			else if( s[i] == '?' ) {
				dp2.fi.fi++;
			}
			dp2.se--;
		}
		if( dp1.fi.fi > dp2.fi.se + dp2.se || dp1.fi.se + dp1.se < dp2.fi.fi ) {
			cout << i << endl;
			return;
		} 
	}
	cout << 10 << endl;
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

