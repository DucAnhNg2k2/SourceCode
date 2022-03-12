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
#define maxn 205

vector<LL> f(maxn);
int n,x,y,z;

void Try(int n) {
	if( n+1 < maxn && f[n+1] > f[n] + x ) {
		f[n+1] = f[n] + x;
		Try(n+1);
	}
	if( n*2 < maxn && f[n*2] > f[n] + z ) {
		f[n*2] = f[n] + z;
		Try(n*2);
	}
	if( n-1 > 1 && f[n-1] > f[n] + y ) {
		f[n-1] = f[n] + y;
		Try(n-1);
	}
}

void solve() { 
	cin >> n >> x >> y >> z;
	FO(i,1,maxn) {
		f[i] = Linf;
	}
	f[1] = x;
	Try(1);
	cout << f[n] << endl;
}	

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
//    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
