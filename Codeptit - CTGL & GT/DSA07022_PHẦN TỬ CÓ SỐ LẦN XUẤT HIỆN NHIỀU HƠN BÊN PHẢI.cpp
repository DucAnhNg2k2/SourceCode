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
	int n;
	cin >> n;
	vector<int> f(1000005,0);
	int a[n+5];
	int ans[n+5];
	FOR(i,1,n) {
		cin >> a[i];
		f[a[i]]++;
	}
	stack<int> st;
	FORD(i,n,1) {
		while( st.size() && f[a[st.top()]] <= f[a[i]])
			st.pop();
		if( st.empty() ) {
			ans[i] = -1;
		}
		else ans[i] = a[st.top()];
		st.push(i);
	}
	FOR(i,1,n) {
		cout << ans[i] << ' ';
	}
	cout << endl;
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
