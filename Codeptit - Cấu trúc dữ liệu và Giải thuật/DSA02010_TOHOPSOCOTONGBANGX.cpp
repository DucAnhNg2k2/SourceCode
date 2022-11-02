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


LL n,s,a[100];
vector<string> v;

void Try(vector<int> vv,int sum) {
	if( sum == s ) {
		string s = "";
		s += '[';
		for(auto i : vv ) {
			s += to_string(i);
			s += ' ';
		}
		s.pop_back();
		s += ']';
		v.pb(s);
		return;
	}
	FOR(i,1,n) {
		if( vv.empty() ) {
			if( sum + a[i] <= s ) {
				sum += a[i];
				vv.pb(a[i]);
				Try(vv,sum);
				vv.pop_back();
				sum -= a[i];
			}
		}
		else {
			if( a[i] >= vv[vv.size()-1 ] ) {
				if( sum + a[i] <= s ) {
					sum += a[i];
					vv.pb(a[i]);
					Try(vv,sum);
					vv.pop_back();
					sum -= a[i];
				}
			}
		}
	}
}

void solve() {
	cin >> n >> s;
	FOR(i,1,n) {
		cin >> a[i];
	}
	v.clear();
	sort(a+1,a+1+n);
	vector<int> vv;
	Try(vv,0);
	if( v.empty() ) cout << -1;
	else for(auto i : v ) cout << i ;
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
