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
	int n;
	cin >> n;
	int a[n+5];
	FOR(i,1,n) cin >> a[i];
	stack<int> st;
	vector<int> l(n+5,-1),r(n+5,-1);
	FORD(i,n,1) {
		while( st.size() && a[st.top()] >= a[i]) {
			st.pop();
		}
		if( st.empty() ) r[i] = -1;
		else r[i] = st.top();
		st.push(i);
	}
	while(st.size()) st.pop();
	FOR(i,1,n) {
		while( st.size() && a[st.top()] < a[i]) {
			l[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	FOR(i,1,n) {
		if( l[i] == -1 ) cout << -1 << ' ';
		else if( r[l[i]] == -1 ) cout << -1 << ' ';
		else cout << a[r[l[i]]] << ' ';
	}
	cout << endl;
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