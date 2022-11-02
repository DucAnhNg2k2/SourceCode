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

vector<LL> v;
void init() {
	for(LL i = 1; i <= 1e6; i++ ) {
		v.pb(i*i*i);
	}
}

int find(LL x) {
	int l = 0, r = v.size()-1;
	while( l < r ) {
		int m =(l+r)/2;
		if( v[m] >= x ) r = m;
		else l = m+1;
	}
	return l;
}

bool check(LL s1,LL s2) {
	string a = to_string(s1), b = to_string(s2);
	int i = 0, j = 0;
	while(i < a.size()) {
		if(j == b.size() && i < a.size()) {
			return false;
		}
		if( a[i] == b[j]) {
			i++;
			j++;
		}
		else {
			j++;
		}
	}
	return true;
}

void solve() {
	LL n;
	cin >> n;
	FORD(i,find(n),0) {
		if( v[i] <= n && check(v[i],n) ) {
			cout << v[i] << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	init();
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
