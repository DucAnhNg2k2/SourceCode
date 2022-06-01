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
#define maxn 1005

struct Edge {
    LL v,c;
    Edge(LL v,LL c) {
        this->v = v;
        this->c = c;
    }
};
struct Node {
    LL u,k,dist;
    Node(LL u,LL dist,LL k) {
        this->u = u;
        this->dist = dist;
        this->k = k;
    }
};
struct cmp {
    bool operator()(Node a,Node b) {
        return a.dist > b.dist;
    }
};

vector<Edge> g[maxn] = {};
vector<vector<LL>> f(maxn,vector<LL>(15,LMAX));
vector<vector<bool>> vs(maxn,vector<bool>(15,false));

void solve() {
    LL power[20];
    power[0] = 1;
    int n,m,k;
    cin >> n >> m >> k;
    FOR(i,1,15) {
        power[i] = power[i-1]*2;
    }
    f[1][k] = 0;
    while(m--) {
        LL u,v,w;
        cin >> u >> v >> w;
        w *= power[15];
        g[u].pb(Edge(v,w));
        g[v].pb(Edge(u,w));
    }
    priority_queue<Node,vector<Node>,cmp> q;
    q.push(Node(1,f[1][k],k));
    while(q.size()) {
        Node top = q.top(); q.pop();
        LL u = top.u, dist = top.dist, k = top.k;
        if(vs[u][k]) continue;
        vs[u][k] = true;
        for(auto i:g[u]) {
            LL v = i.v, c = i.c;
            FOR(j,0,k) {
                if(f[u][k] + c/power[j] < f[v][k-j]) {
                    f[v][k-j] = f[u][k] + c/power[j];
                    q.push(Node(v,f[v][k-j],k-j));
                }
            }
        }
    }
    cout << setprecision(2) << fixed << double(f[n][0])/power[15];
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
