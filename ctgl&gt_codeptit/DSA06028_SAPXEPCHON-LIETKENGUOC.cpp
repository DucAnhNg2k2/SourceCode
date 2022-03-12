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
#define all(x) (x).begin(),(x).end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 1000005

void solve() {
	int n , size = 1;
	cin >> n;
	LL a[n+5] = {};
	FOR(i,1,n) {
		cin >> a[i];
	}
	vector<string> v;
	FOR(i,1,n-1) {
		int pos = i;
		FOR(j,i+1,n) {
			if( a[pos] > a[j] ) {
				pos = j;
			}
		}
		swap(a[pos],a[i]);
		string res = "Buoc " + to_string(i) + ": "; 
		FOR(j,1,n) {
			res += to_string(a[j]);
			res += ' ';
		}		 
		v.pb(res);
	}
	FORD(i,v.size()-1,0) {
		cout << v[i] << endl;
	}
}

int main() {
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
