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

LL f[maxn];

void init() {
    f[1] = 1;
    f[2] = 2;
    f[3] = 3;
    FOR(i,4,10000) {
        f[i] = Linf;
        int tt = sqrt(i);
        if( tt*tt == i ) f[i] = 1;
        else {
            FOR(j,1,i-1) {
                f[i] = min(f[i],f[j]+f[i-j]);
            }
        }
    }
}

void solve() {
	int n;
    cin >> n;
    cout << f[n] << endl;
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
