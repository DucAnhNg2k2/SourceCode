#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define LD long double
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
#define all(x) (x.begin(), x.end())
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

struct SegmentTree {
	LL *A, n, *st;
	int left( int p ) {
		return p << 1;
	}
	int right ( int p ) {
		return ( p << 1 ) | 1;
	}
	SegmentTree(LL _a[],int _n) {
		n = _n;
		A = _a;
		st = new LL[4*n];
		build();
	}
	void build() {
		FO(i,1,4*n) {
			st[i] = 0;
		}
	}
	LL getMax(int p,int L,int R,int i,int j) {
		if( j < L || R < i ) 
			return 0;
		if( i <= L && R <= j ) {
			return st[p];
		}
		int M = (L+R)/2;
		return max ( getMax(left(p),L,M,i,j) , getMax(right(p),M+1,R,i,j) );
	}
	LL getMax(int i,int j) {
		return getMax(1,1,n,i,j);
	}
	void update(int p,int L,int R,int index,LL x) {
		if( R < index || L > index ) {
			return;
		}
		if( L == R ) {
			st[p] += x;
			return;
		}
		int M = (L+R)/2;
		update(left(p),L,M,index,x); 
		update(right(p),M+1,R,index,x);
		st[p] = max(st[left(p)], st[right(p)]);
	}
	~SegmentTree() {
		delete []st;
	}
};

void solve() {
	int n;
	cin >> n;
	LL a[n+5],b[n+5];
	FOR(i,1,n) {
		cin >> a[i];
	}	
	FOR(i,1,n) {
		cin >> b[i];
	}
	SegmentTree tree(a,n);
	LL ans = 0;
	FOR(i,1,n) {
		LL get = tree.getMax(1,a[i]-1);
		b[i] += get;
		tree.update(1,1,n,a[i],b[i]);
		ans = max(ans,b[i]);
	}
	cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
//    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
