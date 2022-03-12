#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FO(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl

using namespace std;
// https://codeforces.com/contest/500/problem/A
typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005

void solve() {
	int n,t,pos = 1;
	cin >> n >> t;
	int a[n+5];
	FOR(i,1,n) cin >> a[i];
	while( pos != t && pos <= n ) {
		pos = pos + a[pos];
		if( pos == t ) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
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
