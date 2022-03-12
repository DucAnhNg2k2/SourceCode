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

// https://luyencode.net/problem/RQSUM
using namespace std;

typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005

struct SegmentTree {
	pair<LL,LL>* st;
	LL* A;
	int n;
	int left( int p ) {
		return p << 1;
	}
	int right ( int p ) {
		return ( p << 1 ) | 1;
	}
	SegmentTree(LL _a[],int _n) {
		n = _n;
		A = _a;
		st = new pair<LL,LL>[4*n];
		build(1,1,n);
	}
	void build(int p,int L,int R) {
		if( L == R ) {
			st[p].fi = A[L] ;
			st[p].se = 0;
			return;
		}
		int M = (L+R)/2;
		build(left(p),L,M);
		build(right(p),M+1,R);
		
		st[p].fi = st[left(p)].fi + st[right(p)].fi;
	}
	void down(int p,int L,int R) {
		int M = (L+R)/2;
		
		st[left(p)].se += st[p].se;
		st[left(p)].fi += (M-L+1) * st[p].se;
		if( L == M ) st[left(p)].se  = 0;
		
		st[right(p)].se += st[p].se;	
		st[right(p)].fi += (R-(M+1)+1) * st[p].se;
		if( M+1 == R ) st[right(p)].se = 0;
		
		st[p].se = 0;
	}	
	LL rmq(int p,int L,int R,int i,int j) {
		if( j < L || R < i ) 
			return 0;
		if( i <= L && R <= j ) {
			return st[p].fi;
		}
		down(p,L,R);
		int M = (L+R)/2;
		LL p1 = rmq(left(p),L,M,i,j) , p2 = rmq(right(p),M+1,R,i,j);
		return p1 + p2;
	}
	LL rmq(int i,int j) {
		return rmq(1,1,n,i,j);
	}
	void update(int p,int L,int R,int u,int v,LL x) {
		if( R < u || L > v ) 
			return;
		if( u <= L && R <= v ) {
			st[p].se += x;
			st[p].fi += (R-L+1) * x;
			return;
		}
		down(p,L,R);
		int M = (L+R)/2;
		update(left(p),L,M,u,v,x); 
		update(right(p),M+1,R,u,v,x);
		st[p].fi = st[left(p)].fi + st[right(p)].fi;
	}
	void update(int u,int v,LL x) {
		update(1,1,n,u,v,x);
	}
	~SegmentTree() {
		delete []st;
	}
};
void solve() {
	int n,m;
	cin >> n >> m;
	LL a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
	}
	SegmentTree st(a,n);
	while( m-- ) {
		int choose;
		cin >> choose;
		if( choose == 1 ) {
			int u,v;LL x;
			cin >> u >> v >> x;
			st.update(u,v,x);
		}
		else {
			int L,R;
			cin >> L >> R;
			cout << st.rmq(L,R) << endl;
		}
	}
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
//freopen("1.in","r",stdin);
//freopen("1.out","w",stdout);
    solve();
    return 0;
}
