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

typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005

struct SegmentTree {
	vector<LL> st,A;
	int n;
	int left( int p ) {
		return p << 1;
	}
	int right ( int p ) {
		return ( p << 1 ) | 1;
	}
	SegmentTree(const vector<LL>& _a,int _n) {
		n = _n;
		A = _a;
		st.assign(4*n,0);
		build(1,1,n);
	}
	void build(int p,int L,int R) {
		if( L == R ) {
			st[p] = A[L] ;
			return;
		}
		int M = (L+R)/2;
		build(left(p),L,M);
		build(right(p),M+1,R);
		
		st[p] = max(st[left(p)],st[right(p)]);
	}
	LL rmq(int p,int L,int R,int i,int j) {
		if( j < L || R < i ) 
			return -Linfi;
		if( i <= L && R <= j ) {
			return st[p];
		}
		
		int M = (L+R)/2;
		LL p1 = rmq(left(p),L,M,i,j) , p2 = rmq(right(p),M+1,R,i,j);
		return max(p1,p2);
	}
	int rmq(int i,int j) {
		return rmq(1,1,n,i,j);
	}
	void update(int p,int L,int R,int i,int x) {
		if( R < i || L > i ) 
			return;
		if( L == R ) {
			st[p] = x;
			return;
		}
		int M = (L+R)/2;
		update(left(p),L,M,i,x); 
		update(right(p),M+1,R,i,x);
		st[p] = max(st[left(p)],st[right(p)]);
	}
	void update(int i,int x) {
		update(1,1,n,i,x);
	}
};
void solve() {
//    while(getline(fin1,x)) A.pb(x);
//    while(getline(fin2,x))  B.pb(x);
//    FO(i,0,A.size()) if(A[i] != B[i]) cout << i+1 << endl;
	int n,q;
	cin >> n >> q;
	vector<LL> a(n+5);
	FOR(i,1,n) {
		cin >> a[i];
	}
	SegmentTree st(a,n);
	while( q-- ) {
		int choose;
		cin >> choose;
		if( choose == 2 ) {
			int L,R;
			cin >> L >> R;
			cout << st.rmq(L,R) << ' ';
		}
		else {
			LL i,x;
			cin >> i >> x;
			st.update(i,x);
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
