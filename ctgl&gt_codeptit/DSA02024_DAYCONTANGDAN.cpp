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

vector<string> ans;
void Xuat() {
	string res = "";
	vector<int> v;
	FOR(i,1,n) {
		if( x[i] ) {
			if( v.empty() ) {
				v.pb(a[i]);
			}
			else {
				if( a[i] <= v[v.size()-1] ) return;
				v.pb(a[i]);
			}
		}
	}
	if( v.size() < 2 ) 
		return;
	for(auto i : v) {
		res = res + to_string(i) + ' ';
	}
	ans.pb(res);
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
	Try(1);
	sort(ans.begin(),ans.end());
	for(auto i:ans) {
		cout << i << endl;
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
