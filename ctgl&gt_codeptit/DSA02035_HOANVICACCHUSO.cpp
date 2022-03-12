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

int x[10],n,k,ans = inf;
bool vs[10] = {};
string a[10];

void Xuat() {
	int res[10] = {};
	FOR(i,1,n) {
		FOR(j,1,k) {
			res[i] = res[i]*10 + (int)(a[i][x[j]]-'0');
		}
	}
	sort(res+1,res+1+n);
	ans = min(ans,res[n]-res[1]);
}

void Try(int i) {
	for(int j = 1 ; j <= k ; j++ ) {
		if( vs[j] == false ) {
			vs[j] = true;
			x[i] = j;
			if( i < k ) Try(i+1);
			else Xuat();
			vs[j] = false;
		}
	}
}

void solve() {
	cin >> n >> k;
	FOR(i,1,n) {
		cin >> a[i];
		a[i] = ' ' + a[i];
	}
	Try(1);
	cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
