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
#define maxn 100005

void solve() {
    int n,m;
    cin >> n >> m;
    vector<vector<LL>> a(n+5,vector<LL>(n+5,inf));
    vector<vector<LL>> D(n+5,vector<LL>(n+5,inf));
    FOR(i,1,n) {
        D[i][i] = 0;
    }
    while(m--) {
        LL u,v,w;
        cin >> u >> v >> w;
        a[u][v] = a[v][u] = w;
        D[u][v] = D[v][u] = w;
    }
    FOR(k,1,n) {
        FOR(u,1,n) {
            FOR(v,1,n) {
                D[u][v] = min(D[u][v],D[u][k]+D[k][v]);
            }
        }
    }
    int g;
    cin >> g;
    while(g--) {
        int x,y;
        cin >> x >> y;
        cout << D[x][y] << endl;
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