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


LL n,size,legth;
string s;
vector<LL> v;

char Try(LL n,LL int pos) {
	if( n <= legth) {
		return s[n];
	}
	LL size = v[pos];
	if( n <= size/2 ) {
		return Try(n,pos-1);
	}
	else {
		if( n == size+1 ) {
			return Try(n-1,pos);
		}
		else return Try(n-1-size/2,pos);
	}
}

void solve() {
	cin >> s >> n;
	size = s.size();
	legth = s.size();
	s = ' ' + s;
	v.clear();
	while( size <= Linf ) {
		v.pb(size);
		size *= 2;
	}
	cout << Try(n,v.size()-1) << endl;
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

