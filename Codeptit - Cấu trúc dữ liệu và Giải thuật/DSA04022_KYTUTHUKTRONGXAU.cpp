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
#define maxn 100005

vector<char> v;
LL n,k;

char Try(LL k) {
	double tmp1 = log2(k);
	LL tmp2 = tmp1;
	if( tmp2 == tmp1 ) {
		return v[tmp2];
	}
	else {
		return Try(k-(1<<tmp2));
	}
}

void solve() {
	cin >> n >> k;
	cout << Try(k) << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	FOR(i,'A','Z') {
		v.pb(i);
	}
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
