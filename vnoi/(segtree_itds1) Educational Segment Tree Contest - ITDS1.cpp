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

int n,m;
LL a[maxn];
multiset<LL> st[4*maxn] = {};

void init(int p,int l,int r) {
    if(l == r) {
       st[p].insert(a[l]);
       return; 
    }
    int m = (l+r)/2;
    init(p*2,l,m);
    init(p*2+1,m+1,r);
    for(auto&i : st[p*2]) st[p].insert(i);
    for(auto&i : st[p*2+1]) st[p].insert(i);
}

void update(int p,int l,int r,int idx,int x) {
    if(r < idx || l > idx) {
        return;
    }
    if(l == r) {
        int val = *st[p].begin();
        while(p >= 1) {
            auto i = st[p].find(val);
            st[p].erase(i);
            st[p].insert(x);
            p /= 2;
        }
        return;
    }
    int m = (l+r)/2;
    update(p*2,l,m,idx,x);
    update(p*2+1,m+1,r,idx,x);
}

LL get(int p,int l,int r,int i,int j,int k) {
    if(r < i || l > j) {
        return -1;
    }
    if(i <= l && r <= j) {
        auto i = st[p].lower_bound(k);
        if(i == st[p].end()) return -1;
        return *i;
    }
    int m = (l+r)/2;
    LL ans1 = get(p*2,l,m,i,j,k);
    LL ans2 = get(p*2+1,m+1,r,i,j,k);
    if(ans1 != -1 && ans2 != -1) return min(ans1,ans2);
    if(ans1 == -1) return ans2;
    if(ans2 == -1) return ans1;
    return -1;
}

void solve() {
    cin >> n >> m;
    FOR(i,1,n) {
        cin >> a[i];
    }
    init(1,1,n);
    while(m--) {
        int c;
        cin >> c;
        if(c == 1) {
            int i; LL v;
            cin >> i >> v;
            update(1,1,n,i,v);
        }
        else {
            int l,r; LL k;
            cin >> l >> r >> k;
            cout << get(1,1,n,l,r,k) << endl;
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
