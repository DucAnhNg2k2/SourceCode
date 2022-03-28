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
const LL MOD = 998244353;
#define maxn 100005

int maxRow(int a[],int n) {
    stack<int> st;
    int L[n+5],R[n+5];
    for(int i = 1 ; i <= n ; ++i ) {
		while( !st.empty() && a[st.top()] >= a[i] ) 
			st.pop();
		if( st.empty() ) L[i] = 1;
		else L[i] = st.top()+1;
		st.push(i);
	}
	while( !st.empty() ) 
		st.pop();
	for(int i = n ; i >= 1 ; --i ) {
		while( !st.empty() && a[st.top()] >= a[i] ) 
			st.pop();
		if( st.empty() ) R[i] = n;
		else R[i] = st.top()-1;
		st.push(i);
	}
	int Max = -1;
	for(int i = 1 ; i <= n ; i++ ) {
		Max = max( (R[i]-L[i]+1)*a[i],Max);
	}
	return Max;
}

void solve() {
    int n,m;
    cin >> n >> m;
    int f[n+5][m+5] = {},a[n+5][m+5] = {};
    FOR(i,1,n) {
        FOR(j,1,m) {
            cin >> a[i][j];
        }
    }
    FOR(i,1,n) {
        FOR(j,1,m) {
            if( a[i][j] ) f[i][j] = f[i-1][j]+1;
        }
    }
    int ans = 0;
    FOR(i,1,n) {
        ans = max(ans,maxRow(f[i],m));
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
