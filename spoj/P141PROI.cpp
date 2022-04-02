#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ll;
const ll oo = 9000000000000000000LL;
 
struct Edge {
   int v;
   long long w;
   Edge(int v,long long w)
   {
      this->v = v;
      this->w = w;
   }
};
struct Node {
   int u;
   long long Dist_u;
   Node(int u,long long Dist_u)
   {
      this-> u =u;
      this-> Dist_u = Dist_u;
   }
};
ll kk[50],n,m,k,a[25][25];
vector<vector<Edge> > ds(1005);
vector<vector<ll> > v(1005,vector<ll>(1005,oo));
vector<vector<ll> > f(25,vector<ll>(70005,oo));
vector<bool> P(1005,true);
vector<ll> D(1005);
struct cmp{
   bool operator()(Node a,Node b)
   {
      return a.Dist_u > b.Dist_u;
   }
};
 
void dijkstra(int st)
{
   v[st][st] = 0;
   D[st] = 0;
   priority_queue<Node,vector<Node>,cmp> h;
   h.push(Node(st,D[st]));
   while( !h.empty() ) 
   {
      Node dinh = h.top();
      h.pop();
      int u = dinh.u;
      if( P[u] ) continue;
      v[st][u] = D[u];
      P[u] = true;
      for(int i = 0 ; i < ds[u].size() ; i++ )
      {
         int v = ds[u][i].v;
         long long w = ds[u][i].w;
         if( P[v] == false )
         {
            if( D[u]+w < D[v] )
            {
               D[v] = D[u] + w;
               h.push(Node(v,D[v]));
            }
         }
      }
   }
}
 
void init()
{
	cin >> n >> m >> k;
   for(int i = 2 ; i <= k+1 ; i++ )
   		cin >> kk[i];
   kk[1] = 1;
   kk[k+2] = 1;
   k += 2;
   f[1][1] = 0;
   for(int i = 1 ; i <= m ; i++ )
   {
      int u,v; long long c;
      cin >> u >> v >> c;
      ds[u].push_back(Edge(v,c));
   }
  	   
      for(int i = 1 ; i <= k ; i++ )
   	{
		   for(int j = 1 ; j <= n ; j++ )
		   {
		      P[j] = false;
		      D[j] = oo;
	      }
         dijkstra(kk[i]);
      }
 
}
 
void solve()
{
	for(int i = 1 ; i <= k ; i++ )
		for(int j = 1 ; j <= k ; j++ )
			a[i][j] = v[kk[i]][kk[j]];
   k -=1;
	f[1][1] = 0;
	int first = 1 , last = (1<<k)-1;
	for(int s = first ; s <= last ; s++ )
	{
		for(int i = 1 ; i <= k ; i++ )
		{
			if( (s>>(i-1))&1 )
			{
				int p = s^(1<<(i-1));
				for(int tmp = 1 ; tmp <= k ; tmp++ )
				{
					if( tmp != i)
					f[i][s] = min(f[i][s],f[tmp][p]+a[tmp][i]);
				}
			}
		}
	}
	ll Min = oo;
   for(int i = 2 ; i <= k ; i++ )
   {
      if( f[i][last] != oo && Min > f[i][last]+a[i][1] ) Min = f[i][last]+a[i][1];
   }
   if( Min == oo ) cout << -1;
   else cout << Min;
}
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	init();
	solve();
} 
