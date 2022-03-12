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

LL dem[maxn];
void solve() {
	int n,m;
	cin >> n >> m;
	LL a[n+5],b[m+5];
	FOR(i,0,n-1) {
		cin >> a[i];
	}
	FO(i,0,maxn) {
		dem[i] = 0;
	}
	FOR(i,0,m-1) {
		cin >> b[i];
	}
	FOR(i,0,n-1) {
		FOR(j,0,m-1) {
			int s = a[i]*b[j];
		//	cout << i << ' ' << j << ' ' << i+j << ' ' << s << endl;
			dem[i+j] += s;
		}
	}
	FOR(i,0,n+m-2) {
		cout << dem[i] << ' ';
	}
	cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
