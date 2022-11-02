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

LL u[] = {'?',2,3,5,7,11,13,17,19,23,29};
LL N,res = Linf;
int n = sizeof(u) / sizeof(LL);

void Try(int i,LL ans,int dem) {
	if( dem > N || ans > res ) {
		return;
	}
	if( dem == N ) res = min(res,ans);

	for(int j = 1 ; true ; j++ ) {
		if( ans * u[i] > res || dem*(j+1) > N ) {
			return;
		}
		ans *= u[i];
		if( ans < 0 ) return;
		Try(i+1,ans,dem * (j+1));
	}
}

void solve() {
	cin >> N;
	if( N == 1 ) cout << 1 << endl;
	else if( N == 2 ) cout << 2 << endl;
	else {
		res = Linf;
		Try(1,1,1);
		cout << res << endl;
	}
}

int main() {
  //  ios::sync_with_stdio(false);
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
