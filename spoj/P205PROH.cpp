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
// https://www.spoj.com/PTIT/problems/P205PROH/
struct Node {
	bool dd[26];
	Node() {
		for(int i = 0 ; i < 26 ; i++ ) {
			dd[i] = false;
		}
	}
};
Node operator + (const Node& a ,const Node& b) {
	Node tmp;
	for(int i = 0 ; i < 26 ; i++ ) {
		tmp.dd[i] = ( a.dd[i] || b.dd[i] );
	}
	return tmp;
}
struct SegmentTree {
	char *A ;
	Node *st;
	int n;
	int left( int p ) {
		return p << 1;
	}
	int right ( int p ) {
		return ( p << 1 ) | 1;
	}
	SegmentTree(char _a[],int _n) {
		n = _n;
		A = _a;
		st = new Node[4*n]();
		build(1,1,n);
	}
	void build(int p,int L,int R) {
		if( L == R ) {
			st[p].dd[ A[L] - 'a' ] = true ;
			return;
		}
		int M = (L+R)/2;
		build(left(p),L,M);
		build(right(p),M+1,R);
		
		st[p] = st[left(p)] + st[right(p)];		
	}
	Node rmq(int p,int L,int R,int i,int j) {
		if( j < L || R < i ) 
			return Node();
		if( i <= L && R <= j ) {
			return st[p];
		}
		int M = (L+R)/2;
		return rmq(left(p),L,M,i,j) + rmq(right(p),M+1,R,i,j);
	}
	Node rmq(int i,int j) {
		return rmq(1,1,n,i,j);
	}
	void update(int p,int L,int R,int i) {
		if( R < i || L > i ) 
			return ;
		if( L == R ) {
			st[p] = Node();
			st[p].dd[ A[L] - 'a' ] = true;
			return;
		}
		int M = (L+R)/2;
		update(left(p),L,M,i);
		update(right(p),M+1,R,i);
		
		st[p] = st[left(p)] + st[right(p)];
	}
	void update(int i) {
		update(1,1,n,i);
	}
	~SegmentTree() {
		delete []st;
	}
};
 
char s[1000005];
void solve() {
	scanf("%s",s);
	int n = strlen(s);
	for(int i = n ; i >= 1 ; i-- ) {
		s[i] = s[i-1];
	}
	SegmentTree st(s,n);
	int q;
	scanf("%d",&q);
	while( q-- ) {
		int choose;
		scanf("%d",&choose);
		if( choose == 1 ) {
			int i; char c;
			cin >> i >> c;
			s[i] = c;
			st.update(i);
		}
		else {
			int l,r;
			scanf("%d %d",&l,&r);
			Node tmp = st.rmq(l,r);
			int cnt = 0;
			FO(i,0,26) {
				cnt += tmp.dd[i];
			}
			printf("%d\n",cnt);
		}
	}
}
 
int main(){
  // ios::sync_with_stdio(false);
//#ifndef ONLINE_JUDGE
//    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
//#endif
    solve();
    return 0;
} 
