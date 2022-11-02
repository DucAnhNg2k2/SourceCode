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

LL f[105][10] = {};

void init() {
    for(int i = 0; i <= 9 ; i++ ) {
        f[1][i] = 1;
    }
    for(int i = 2 ; i <= 100; i++ ) {
        for(int j = 0 ; j <= 9 ; j++ ) {
            for(int k = 0 ; k <= j ; k++ ) {
                f[i][j] += f[i-1][k];
                f[i][j] %= MOD;
            }
        }
    }
}
void solve() {
	int n;
    cin >> n;
    LL ans = 0;
    FOR(i,0,9) {
        ans += f[n][i];
        ans %= MOD;
    }
    cout << ans << endl;
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
