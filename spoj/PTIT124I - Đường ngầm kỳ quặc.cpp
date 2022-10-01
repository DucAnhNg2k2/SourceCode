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
#define maxn 200005
int n,m,w,f[505][505],ans[505];
void solve()
{
    cin>>n>>m>>w;
    vector<pair<int,int>>g;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) f[i][j]=1e9;
    }
    for(int i=1;i<=m;i++)
    {
        int u,v,t;
        cin>>u>>v>>t;
        g.push_back({u,v});
        g.push_back({v,u});
        f[u][v]=f[v][u]=min(t,f[u][v]);
    }
    for(int i=1;i<=w;i++)
    {
        int u,v,t;
        cin>>u>>v>>t;
        g.push_back({u,v});
        f[u][v]=min(f[u][v],-t);
    }
    for(int i=1;i<=n;i++) ans[i]=1e9;
    ans[1]=0;
    for(int i=1;i<=n+1;i++)
    {
        for(auto j:g)
        {
            int u=j.first;
            int v=j.second;
            if(ans[v]>ans[u]+f[u][v] && ans[u] != IMAX)
            {
                ans[v]=ans[u]+f[u][v];
                if(i==n+1) return cout<<"YES\n",void();
            }
        }
    }
    cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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