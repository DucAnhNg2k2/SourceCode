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
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 1000005

struct Edge {
	int v; LL c;
	Edge(int v,LL c){
		this->v = v;
		this->c = c;
	}
};
struct Node {
	int u; LL dist_u;
	Node(int u,LL dist_u){
		this->u = u;
		this->dist_u = dist_u;
	}
};
struct cmp {
	bool operator()(Node a,Node b) {
		return a.dist_u > b.dist_u;
	}
};
vector<LL> dijkstra(int begin,int n,vector<vector<Edge>> &ds) {
	vector<LL> dist(n+5,1e18); dist[begin] = 0;
	vector<bool> vs(n+5,false); 

	priority_queue<Node,vector<Node>,cmp> q;
	q.push(Node(begin,dist[begin]));
	
	while( !q.empty() ) {
		Node top = q.top() ; q.pop();
		int u = top.u;
		if( vs[u] ) continue;
		vs[u] = true;
		for(int i = 0;i < ds[u].size(); i++) {
			int v = ds[u][i].v ; LL c = ds[u][i].c ;
			if( dist[u] + c < dist[v] ) {
				dist[v] = dist[u] + c;
				q.push(Node(v,dist[v]));
			}
		}
	}
	return dist;
}

void solve() {
	int n,m,u;
	cin >> n >> m >> u;
	vector<vector<Edge>> g(n+5);
	while(m--) {
		LL u,v,w;
		cin >> u >> v >> w;
		g[u].pb(Edge(v,w));
		g[v].pb(Edge(u,w));
	}
	vector<LL> dist = dijkstra(u,n,g);
	FOR(i,1,n) {
		cout << dist[i] << ' ';
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