#include<bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

void solve() { 
	int v,e,m;
	cin >> v >> e >> m;
	bool M[v+5][v+5] = {};
	int cnt[v+5] = {},color[v+5] = {};
	FOR(i,1,e) {
		int u,v;
		cin >> u >> v;
		M[u][v] = true;
		M[v][u] = true;
		cnt[v]++;
		cnt[u]++;
	}
	int dem = 0;
	while(1) {
		int top =-1, Max = -1;
		FOR(i,1,v) {
			if(color[i]==0 && Max < cnt[i]) {
				top = i;
				Max = cnt[i];
			}
		}
		if(top == -1) break;
	//	cout << top << endl;
		color[top] = ++dem;
		FOR(i,1,v) {
			if(color[i]==0 && M[top][i] == false) {
				color[i] = dem;
				FOR(j,1,v) {
					if(M[i][j]) cnt[j]--;
				}
			}
		}
	}
	if(dem<=m) cout << "YES" << endl;
	else cout << "NO" << endl;
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
