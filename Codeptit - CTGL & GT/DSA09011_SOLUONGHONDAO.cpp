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
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	int n,m;
	cin >> n >> m;
	vector<vector<int>> v(n+5,vector<int>(m+5,-1));
	FOR(i,1,n) {
		FOR(j,1,m) {
			cin >> v[i][j];
		}
	}
	int dem = 0;
	FOR(i,1,n) {
		FOR(j,1,m) {
			if( v[i][j] == 1) {
	 			queue<pII> q;
				q.push({i,j});
				v[i][j] = -1;
				while(q.size()) {
					pII p = q.front(); q.pop();
					FOR(i,-1,1) {
						FOR(j,-1,1) {
							pII tmp(p.fi+i,p.se+j);
							if( v[tmp.fi][tmp.se] == 1 ) {
							 	v[tmp.fi][tmp.se] = -1;
								q.push({tmp.fi,tmp.se});
							}
						}
					}
				}
				dem++;
			}
		}
	}
	cout << dem << endl;
}

int main(){
//    ios::sync_with_stdio(false);
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
