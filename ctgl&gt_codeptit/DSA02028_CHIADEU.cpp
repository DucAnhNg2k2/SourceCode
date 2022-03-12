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

int n,K,a[100],dem = 0,s = 0;

void Try(int pos,int sum,int k) {
	if( pos > n ) {
		return;
	}
	if ( k == K-1 ) {
		dem++;
		return;
	}
	if( sum + a[pos] == s ) {
		Try(pos+1,0,k+1);
		Try(pos+1,sum+a[pos],k);
	}	
	else {
		Try(pos+1,sum+a[pos],k);
	}
}

void solve() {
	cin >> n >> K;
	FOR(i,1,n) {
		cin >> a[i];
		s += a[i];
	}
	if( s%K != 0 ) {
		cout << 0 << endl;
	}
	else {
		s /= K;
		Try(1,0,0);
		cout << dem << endl;
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

