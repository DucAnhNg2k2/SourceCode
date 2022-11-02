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
#define maxn 10005

LL f[105][50005] = {};

void init() {
    for(int i = 1 ; i <= 9 ; i++ ) {
        f[1][i] = 1;
    }
    for(int i = 2 ; i <= 100 ; i++ ) {
        for(int j = 50000 ; j >= 0 ; j-- ) {
            for(int k = 0 ; k <= 9 ; k++ ) {
                if( j >= k )
                {
                    f[i][j] += f[i-1][j-k];
                    f[i][j] %= MOD;
                }
            }
        }
    }
}

void solve() {
	int n,k;
    cin >> n >> k;
    cout << f[n][k] << endl;
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
