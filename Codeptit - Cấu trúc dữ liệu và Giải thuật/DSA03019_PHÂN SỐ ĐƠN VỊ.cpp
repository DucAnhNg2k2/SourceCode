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
#define all(x) x.begin(),x.end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

struct Node {
	LL t,m;
	Node() {}
	Node(LL _t,LL _m) {
		t = _t;
		m = _m;
	}
};


bool operator >= (Node a,Node b) {
	return a.t*b.m >= a.m*b.t;
}

Node tg(Node a) {
	LL x = __gcd(a.t,a.m);
	a.t /= x;
	a.m /= x;
	return a;
}

Node operator - (Node a,Node b) {
	Node tmp; 
	tmp.m = a.m*b.m;
	tmp.t = a.t*b.m - a.m*b.t;
	tmp = tg(tmp);
	return tmp;
}

void solve() {
	Node st;
	cin >> st.t >> st.m;
	while(true) {
		if( st.m%st.t == 0 ) {
			cout << 1 << '/' << st.m/st.t << endl;
			break;
		}
		else {
			LL t = st.m/st.t + 1;
			st = st - Node(1,t);
			cout << 1 << '/' << t << " + ";
		}
	}
}		 

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}