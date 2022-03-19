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
	int s,t;
	cin >> s >> t;
	queue<pII> q;
	q.push({s,0});
	vector<int> vs(1e5,inf);
	vs[s] = 0;
	while(q.size()) {
		int u = q.front().fi, dem = q.front().se;
		q.pop();
		if( u == t ) {
			cout << vs[u] << endl;
			return;
		}
		if( u-1 > 0 && vs[u-1] > dem+1 ) {
			q.push({u-1,dem+1});
			vs[u-1] = dem+1;
		}
		if( u*2 < 1e5 && vs[u*2] > dem+1 ) {
			q.push({u*2,dem+1});
			vs[u*2] = dem+1;
		}
	}
}		 

int main(){
 //   ios::sync_with_stdio(false);
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