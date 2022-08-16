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

void solve() {
	int n,k;
	cin >> n >> k;
	LL a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
	}
	deque<int> dq;
	LL f[n+5];
	FOR(i,1,n) {
		while( dq.size() && a[dq.back()] <= a[i] ) dq.pop_back();
		dq.push_back(i);
		if( dq.front() + k <= i ) dq.pop_front();
		if( i >= k ) {
			f[i] = a[dq.front()];  
		}
	}
	FOR(i,k,n) {
		cout << f[i] << ' ';
	}
	cout << endl;
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
