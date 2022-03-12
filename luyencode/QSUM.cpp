#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define mp make_pair 
#define pb push_back
#define endl '\n'
#define sz(x) (int)(x.size())

struct SegmentTree {
	int n;
	vector<long long> st;
	vector<long long> a;
	SegmentTree(int n,vector<long long> a) {
		this->n = n;
		this->a = a;
		st.resize(4*n+5);
		buildTree(1,1,n);
	}
	void buildTree(int id,int l,int r) {
		if( l == r ) {
			st[id] = a[l] = a[r];
			return ;
		}
		int m = (l+r)/2;
		buildTree(id*2,l,m);
		buildTree(id*2+1,m+1,r);
		st[id] = st[id*2] + st[id*2+1];
	}
	void update(int id,int l,int r,int u,int x) {
		if(  u < l || u > r ) 
			return ;
		if( l == r ) {
			st[id] += x;
			return ;
		}
		int m = (l+r)/2;
		update(id*2,l,m,u,x);
		update(id*2+1,m+1,r,u,x);
		st[id] = st[id*2] + st[id*2+1];
	}
	long long getSum(int id,int l,int r,int u,int v) {
		if( v < l || r < u )
			return 0;
		if( u <= l && r <= v ) {
			return st[id];
		}
		int m = (l+r)/2;
		return getSum(id*2,l,m,u,v)+getSum(id*2+1,m+1,r,u,v);
	}
};
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,Q;
	cin >> n >> Q;
	vector<ll> a(n+5);
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	
	SegmentTree st(n,a);

	while( Q-- ) {
		int q,a,b;
		cin >> q >> a >> b;
		if( q == 1 ) 
			st.update(1,1,n,a,b);
		else 
			cout << st.getSum(1,1,n,a,b) << ' ';
	}
}


