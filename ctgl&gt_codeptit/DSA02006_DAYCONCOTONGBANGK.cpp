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

int x[maxn],n,stop,k,a[maxn];
vector<string> v;

void Xuat() {
	int sum = 0;
	FOR(i,1,n) {
		if( x[i] ) sum += a[i];
	}
	if( sum == k ) {
		string s = "[";
		FOR(i,1,n) {
			if( x[i] ) s += to_string(a[i]) + ' ';
		}
		s.pop_back();
		s += ']';
		v.pb(s);
	}
}

void Try(int i) {
	for(int j = 1 ; j >= 0 ; j-- ) {
		x[i] = j;
		if( i < n ) Try(i+1);
		else Xuat();
	}	
}

void solve() {
	v.clear();
	cin >> n >> k;
	FOR(i,1,n) cin >> a[i];
	sort(a+1,a+1+n);
	Try(1);
	if( v.empty() ) cout << -1;
	for(auto i : v ) cout << i << ' ';
	cout << endl;
}

int main() {
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
