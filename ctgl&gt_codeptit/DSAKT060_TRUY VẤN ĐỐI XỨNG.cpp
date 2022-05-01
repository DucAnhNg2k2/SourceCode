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
#define all(x) x.begin(),x.end()
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100000

pLL st1[maxn*4+5] = {},st2[maxn*4+5] = {};
LL Pow[maxn*4+5] = {};
int n,s[maxn+5] = {},Q;

void build(pLL st[],int id,int l,int r,int q) {
    if( l == r ) {
        st[id] = {s[l],1};
        return;
    }
    int m = (l+r)/2;
    build(st,id*2,l,m,q);
    build(st,id*2+1,m+1,r,q);
    pLL a[] = {st[id*2],st[id*2+1]};
    pLL left = a[abs(0-q)], right = a[abs(1-q)];
    st[id].fi = (((left.fi%MOD)*(Pow[right.se]%MOD))%MOD+right.fi)%MOD;
    st[id].se = left.se + right.se;
}

void update(pLL st[],int id,int l,int r,int u,int x,int q) {
    if( r < u || l > u ) return;
    if( l == r ) {
        st[id] = {x,1};
        return;
    }
    int m = (l+r)/2;
    update(st,id*2,l,m,u,x,q);
    update(st,id*2+1,m+1,r,u,x,q);
    pLL a[] = {st[id*2],st[id*2+1]};
    pLL left = a[abs(0-q)], right = a[abs(1-q)];
    st[id].fi = (((left.fi%MOD)*(Pow[right.se]%MOD))%MOD+right.fi)%MOD;
    st[id].se = left.se + right.se;
}

pLL getS(pLL st[],int id,int l,int r,int i,int j,int q) {
    if( r < i || l > j ) return {0,0};
    if( i <= l && r <= j ) {
        return st[id];
    }
    int m = (l+r)/2;
    pLL a[] = {getS(st,id*2,l,m,i,j,q),getS(st,id*2+1,m+1,r,i,j,q)};
    pLL left = a[abs(0-q)], right = a[abs(1-q)];
    pLL temp;
    temp.fi = (((left.fi%MOD)*(Pow[right.se]%MOD))%MOD+right.fi)%MOD;
    temp.se = left.se + right.se;
    return temp;
}

void solve() {
    Pow[0] = 1;
    FOR(i,1,maxn) {
        Pow[i] = Pow[i-1]*10 % MOD;
    }
    string a;
    cin >> a;
    n = a.size();
    FOR(i,1,n) {
        s[i] = a[i-1] - '0';
    }
    build(st1,1,1,n,0);
    build(st2,1,1,n,1);
    cin >> Q;
    while(Q--) {
        char c; 
        cin >> c;
        if( c == 'q' ) {
            int l,r;
            cin >> l >> r;
            pLL s1 = getS(st1,1,1,n,l,r,0),s2 = getS(st2,1,1,n,l,r,1);
            if(s1.fi == s2.fi) {
                cout << "YES";
            }
            else cout << "NO";
            cout << endl;
        }
        else {
            int u, x;
            cin >> u >> x;
            update(st1,1,1,n,u,x,0);
            update(st2,1,1,n,u,x,1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
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