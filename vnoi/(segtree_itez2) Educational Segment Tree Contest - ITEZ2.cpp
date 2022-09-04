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
#define maxn 100005

struct SegmentTree {
    int n;
    vector<LL> a,st;
    SegmentTree(int n,LL a[]) {
        this->n = n;
        this->a.resize(n+5);
        for(int i = 1; i <= n; i++) {
            this->a[i] = a[i];
        }
        st.resize(4*n+5);
        build(1,1,n);
    }
    void build(int p,int l,int r) {
        if(l == r) {
            st[p] = a[l];
            return;
        }
        int m = (l+r)/2;
        build(p*2,l,m);
        build(p*2+1,m+1,r);
        st[p] = st[p*2] + st[p*2+1];
    }
    void update(int p,int l,int r,int idx,LL val) {
        if(r < idx || l > idx) {
            return;
        }
        if(l == r) {
            st[p] = a[l] = val;
            return;
        }
        int m = (l+r)/2;
        update(p*2,l,m,idx,val);
        update(p*2+1,m+1,r,idx,val);
        st[p] = st[p*2] + st[p*2+1];
    }
    LL get(int p,int l,int r,int i,int j) {
        if(r < i || l > j) {
            return 0;
        }
        if(i <= l && r <= j) {
            return st[p];
        }
        int m = (l+r)/2;
        return get(p*2,l,m,i,j) + get(p*2+1,m+1,r,i,j);
    }
};

void solve() {
    int n,q;
    cin >> n >> q;
    LL a[n+5] = {};
    SegmentTree tree(n,a);
    while(q--) {
        int c;
        cin >> c;
        if(c == 1) {
            int x,y;
            cin >> x >> y;
            tree.update(1,1,n,x,y);
        }
        else {
            int l,r;
            cin >> l >> r;
            LL val = tree.get(1,1,n,l,r);
            cout << val << endl;
        }
    }
}

int main() {
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
