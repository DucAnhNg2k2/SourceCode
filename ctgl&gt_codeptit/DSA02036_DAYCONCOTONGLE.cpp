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

int x[25],n,a[25];
set<vector<int>> s;

void Xuat() {
	int sum = 0;
	FOR(i,1,n) {
		if( x[i] ) sum += a[i];
	}
	if( sum&1 ) {
		vector<int> v;
		FOR(i,1,n) {
			if( x[i] ) {
				v.pb(a[i]);
			}
		}
		sort(v.begin(),v.end(),greater<int>());
		s.insert(v);
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
	cin >> n;
	FOR(i,1,n) {
		cin >> a[i];
	}
	s.clear();
	Try(1);
	for(auto i : s) {
		for(auto j : i) {
			cout << j << ' ';
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
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
