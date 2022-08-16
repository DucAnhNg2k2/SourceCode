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

LL maxRow(LL a[],int n) {
    stack<int> st;
    LL L[n+5],R[n+5];
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
	LL Max = 0;
	for(int i = 1 ; i <= n ; i++ ) {
        if( a[i] <= R[i]-L[i]+1 )
		    Max = max(a[i],Max);
	}
	return Max;
}

void solve() {
    int n;
    cin >> n;
    LL a[n+5];
    FOR(i,1,n) cin >> a[i];
    cout << maxRow(a,n) << endl;
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
