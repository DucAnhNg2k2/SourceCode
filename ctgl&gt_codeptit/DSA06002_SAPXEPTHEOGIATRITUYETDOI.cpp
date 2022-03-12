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

LL x;
bool compare(pLL a ,pLL b ) {
	if( abs(x-a.fi) == abs(x-b.fi) ) {
		return a.se < b.se;
	}
	return abs(x-a.fi) < abs(x-b.fi);
}

void solve() {
	int n;
	cin >> n >> x;
	pLL a[n+5];
	FOR(i,1,n) {
		cin >> a[i].first;
		a[i].se = i;
	} 
	sort(a+1,a+1+n,compare);
	FOR(i,1,n) {
		cout << a[i].fi << ' ';
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

