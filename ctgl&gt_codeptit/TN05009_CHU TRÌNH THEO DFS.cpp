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

vector<int> ans;
vector<bool> vs(1005);
vector<int> g[1005];

void dfs(int u,int pre,vector<int> arr) {
//    cout << pre << ' ' << u << endl;
    vs[u] = true;
    for(auto v:g[u]) {
        if(v != pre) {
            if(v==1) {
                if(ans.empty()) {
                    ans = arr;
                    ans.pb(v);
                }
            }
            else if(!vs[v]){
                arr.pb(v);
                dfs(v,u,arr);
                arr.pop_back();
            }
        }
    }
}

void solve() {
    ans = vector<int>();
    for(auto &i : g) i.clear();
    FOR(i,0,1004) vs[i] = false;
    int n,m;
    cin >> n >> m;
    while(m--) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    FOR(i,1,n){
        sort(g[i].begin(),g[i].end());
    }
    dfs(1,1,vector<int>(1,1));
    if(ans.empty()) cout << "NO";
    else {
        for(auto i:ans) cout << i << ' ';
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}