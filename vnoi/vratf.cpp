#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define LD long double
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
#define all(x) (x.begin(), x.end())
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

LL k;
int Try(LL n) {
	if( n > k ) {
		if( (n+k)%2 == 0 ) {
			LL a = (n+k)/2;
			LL b = n-a;
			return Try(a) + Try(b);
		}
	}
	return 1;
}

void solve() {
	LL n;
	cin >> n >> k;
	cout << Try(n) << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while(T--)
    	solve();
    return 0;
}
