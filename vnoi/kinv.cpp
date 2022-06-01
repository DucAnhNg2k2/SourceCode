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
//const LL MOD = 1000000007LL;
const LL MOD = 1e9;
#define PI 3.141592653589793238;
#define maxn 10005

vector<vector<LL>> st(4*maxn+5,vector<LL>(15,0));

int n,k;
LL get(int p,int L,int R,int u,int v,int i) {
    if(R < u || v < L) {
        return 0;
    }
    if(u <= L && R <= v) {
        return (st[p][i]%MOD);
    }
    int m = (L+R)/2;
    return ((get(p*2,L,m,u,v,i)%MOD) + (get(p*2+1,m+1,R,u,v,i)%MOD))%MOD;
}

void update(int p,int L,int R,int i,int j,LL value) {
    if(L > i || R < i) {
        return;
    }
    if(L == R) {
        st[p][j] = ((st[p][j]%MOD) + (value%MOD));
        return;
    }
    int m = (L+R)/2;
    update(p*2,L,m,i,j,value);
    update(p*2+1,m+1,R,i,j,value);
    st[p][j] = ((st[p*2][j]%MOD) + (st[p*2+1][j]%MOD))%MOD;
}

void solve() {
    cin >> n >> k;
    LL ans = 0, t;
    FOR(j,1,n) {
        int x;
        cin >> x;
        FOR(i,1,k) {
            if(i == 1) t = 1;
            else t = get(1,1,maxn,x+1,maxn,i-1);
            update(1,1,maxn,x,i,t); 
            if(i == k) {
                ans = (ans+t)%MOD;
            }
        }
    }
    cout << ans;
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
