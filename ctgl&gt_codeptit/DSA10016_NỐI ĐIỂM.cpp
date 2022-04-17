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
#define maxn 100005

struct Point {
	double x,y;
	int data;
};

struct Edge{
	int u,v ; double w;
	Edge() {
	}
	Edge(int u,int v,double w){
		this->u = u;
		this->v = v;
		this->w = w;
	} 
}; 

struct Dsu{
	vector<int> par;
	void init(int n) {
		par.resize(n+5,0);
		FOR(i,1,n) {
			par[i] = i;
		}
	}
	int find(int u) {
		if( par[u] == u ) return u;
		return par[u] = find(par[u]);
	}
	bool join(int u,int v) {
		u = find(u);
		v = find(v);
		if( u == v ) return false;
		par[u] = v;
		return true;
	}
};

vector<Edge> g;
bool cmp(Edge a,Edge b) {
	return a.w < b.w;
}

double distance(Point a,Point b) {
	return sqrt( (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) );
}

void solve() {
	g.clear();
	double sum = 0;
	int n;
	cin >> n; 
	vector<Point> p(n+5);
	vector<bool> vs(n+5,false);
	FOR(i,1,n) {
		cin >> p[i].x >> p[i].y;
		p[i].data = i;
		
	}
	Dsu dsu;
	dsu.init(n);
	
	for(int i = 1 ; i <= n ; i++ ) {
		for(int j = i+1 ; j <= n ; j++ ) {
			g.pb(Edge(p[i].data,p[j].data,distance(p[i],p[j])));
		}
	}
	sort(g.begin(),g.end(),cmp);
	for(int i = 0 ; i < g.size() ; i++ ) {
		if( dsu.join(g[i].u,g[i].v) ) sum += g[i].w;
	}
	printf("%.6lf\n",sum);
}

int main(){
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
