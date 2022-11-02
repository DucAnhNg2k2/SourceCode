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

int x[maxn],n,dem = 0,a[1005][1005],k;
bool vs[maxn] = {};
vector<vector<int>> v;
void Xuat() {
	int sum = 0;
	FOR(i,1,n) {
		sum += a[i][x[i]];
	}	
	if( sum == k ) {
		dem++;
		vector<int> t;
		FOR(i,1,n) {
			t.pb(x[i]);
		}
		v.pb(t);
	}
}

void Try(int i) {
	for(int j = 1 ; j <= n ; j++ ) {
		if( vs[j] == false ) {
			vs[j] = true;
			x[i] = j;
			if( i < n ) Try(i+1);
			else Xuat();
			vs[j] = false;
		}
	}
}

void solve() {
	cin >> n >> k;
	FOR(i,1,n) {
		FOR(j,1,n) {
			cin >> a[i][j];
		}
	}
	Try(1);
	cout << dem << endl;
	FO(i,0,v.size()) {
		FO(j,0,v[i].size()) {
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
}

int main(){
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
