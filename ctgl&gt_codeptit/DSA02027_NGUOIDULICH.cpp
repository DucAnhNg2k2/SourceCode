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

int n; 
vector<vector<LL>> a(16,vector<LL>(16));
vector<vector<LL>> f(16,vector<LL>(1<<16,Linf));

int getbit(int k,int s)
{
    return ( (s >> (k-1)) & 1); 
}

int dembit(int s)
{
   int cnt = 0 ;
   for(int i = 1 ; i <= n ; i++ )
   {
      if( (s >>(i-1))&1 ) cnt++;
   }
   return cnt;
}

void solve() {
	cin >> n;
	FOR(i,1,n) {
		FOR(j,1,n) {
			cin >> a[i][j];
		}
	}
	int first = 1,last = (1<<n)-1;
	
	f[1][1] = 0;
	for(int s = first ; s <= last ; s++ ) {
		for(int i = 1 ; i <= n ; i++ ) {
			if( ( s>>(i-1)) &1 ) {
				int p = s ^ ( 1 << (i-1) );
				for(int tmp = 1 ; tmp <= n ; tmp++ ) {
					if( tmp != i ) {
						f[i][s] = min(f[i][s],f[tmp][p] + a[tmp][i]);
					}
				}
			}
		}
	}
	LL ans = Linf;
	FOR(i,2,n) {
		ans = min(ans,f[i][last]+a[i][1]);
	}
	cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

