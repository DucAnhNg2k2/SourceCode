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
#define maxn 100000

pII st[4*maxn+5] = {};
char s[maxn+5] = {};

pII sum(pII a,pII b) {
	int res = min(a.fi,b.se);
	return mp(a.fi-res+b.fi,b.se-res+a.se);
}

void build(int p,int l,int r) {
	if(l == r) {
		if(s[l] == '(') {
			st[p].fi = 1;
		}
		else {
			st[p].se = 1;
		}
		return;
	}
	int m = (l+r)/2;
	build(p*2,l,m);
	build(p*2+1,m+1,r);
	st[p] = sum(st[p*2],st[p*2+1]);
}

void update(int p,int l,int r,int pos) {
	if(r < pos || l > pos) {
		return;
	}
	if(l == r) {
		st[p] = {0,0};
		if(s[l] == '(') {
			st[p].fi = 1;
		}
		else st[p].se = 1;
		return;
	}
	int m = (l+r)/2;
	update(p*2,l,m,pos);
	update(p*2+1,m+1,r,pos);
	st[p] = sum(st[p*2],st[p*2+1]);
}

pII get(int p,int l,int r,int L,int R) {
	if(r < L || l > R) {
		return {0,0};
	}
	if(L <= l && r <= R) {
		return st[p];
	}
	int m = (l+r)/2;
	return sum(get(p*2,l,m,L,R),get(p*2+1,m+1,r,L,R));
}

void solve() {
	int n,m;
	cin >> n >> m;
	FOR(i,1,n) {
		cin >> s[i];
	}
	build(1,1,n);
	while(m--) {
		int c;
		cin >> c;
		if(c == 0) {
			int pos;
			cin >> pos;
			if(s[pos] == '(') s[pos] = ')';
			else s[pos] = '(';
			update(1,1,n,pos);
		}
		else {
			int u,v;
			cin >> u >> v;
			pII ans = get(1,1,n,u,v);
			if(ans.fi == 0 && ans.se == 0) cout << "1";
			else cout << "0";
		}
	}
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
