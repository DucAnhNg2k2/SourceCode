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

int x[25],n,w,dt = 0;
pLL a[50];
vector<vector<int>> v;

void Xuat() {
	int sum1 = 0 , sum2 = 0;
	vector<int> s;
	FOR(i,1,n) {
		s.pb(x[i]);
		if( x[i] ) {
			sum1 += a[i].fi;
			sum2 += a[i].se;
		} 
	}
	if( sum2 <= w ) {
		if( sum1 > dt ) {
			dt = sum1;
			v.clear();
			v.pb(s);
		}
		else if( sum1 == dt ) {
			v.pb(s);
		}
	}
}

void Try(int i) {
	for(int j = 0 ; j <= 1 ; j++ ) {
		x[i] = j;
		if( i < n ) Try(i+1);
		else Xuat();
	}	
}

void solve() {
	cin >> n >> w;
	FOR(i,1,n) {
		cin >> a[i].fi;
	}
	FOR(i,1,n) {
		cin >> a[i].se;
	}
	Try(1);
	cout << dt << endl;
	FOR(i,0,v.size()-1){
		FOR(j,0,v[i].size()-1){
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
