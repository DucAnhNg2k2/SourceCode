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

struct cmp {
	bool operator()(LL a,LL b) {
		return a > b;
	}
};

void solve() { 
	int n;
	cin >> n;
	priority_queue<LL,vector<LL>,cmp> q;
	LL a[n+5] = {};
	FOR(i,1,n) {
		cin >> a[i];
		q.push(a[i]);
	}
	LL s = 0;
	while( q.size() != 1 ) {
		LL x = q.top();
		q.pop();
		x += q.top();
		q.pop();
		x %= MOD;
		q.push(x);
		s += x;
		s %= MOD;
	}
	cout << s << endl;
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