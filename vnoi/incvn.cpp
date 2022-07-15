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
const LL MOD = 5000000;
#define PI 3.141592653589793238;
#define maxn 100000

vector<vector<LL>> st(4*maxn+5,vector<LL>(105,0));
void update(int p,int l,int r,int x,int length,int val) {
    if(r < x || l > x) {
        return;
    }
    if(l == r) {
        st[p][length] += val;
        st[p][length] %= MOD;
        return;
    }
    int m = (l+r)/2;
    update(p*2,l,m,x,length,val);
    update(p*2+1,m+1,r,x,length,val);
    st[p][length] = st[p*2][length] + st[p*2+1][length];
}
LL get(int p,int l,int r,int u,int v,int length) {
    if(r < u || l > v) {
        return 0;
    }
    if(u <= l && r <= v) {
        return st[p][length]%MOD;
    }
    int m = (l+r)/2;
    return (get(p*2,l,m,u,v,length) + get(p*2+1,m+1,r,u,v,length))%MOD;
}

void solve() {
    int n,k;
    cin >> n >> k;
    LL ans = 0;
    FOR(i,1,n) {
        int x;
        cin >> x;
        x += 1;
        LL val[k+5] = {};
        FOR(i,1,k) {
            val[i] = get(1,0,maxn,0,x-1,i);
        }
        ans += val[k-1];
        ans %= MOD;
        FOR(i,1,k) {
            if(i == 1) {
                update(1,0,maxn,x,1,1);
            }
            else {
                update(1,0,maxn,x,i,val[i-1]);   
            }
        }
    }
    cout << ans << endl;
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