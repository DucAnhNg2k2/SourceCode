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

void solve() {
	int n;
	cin >> n;
	LL a[n+5] = {};
    FOR(i,1,n) {
        cin >> a[i];
    }
    LL f1[n+5] = {},f2[n+5] = {};
    FOR(i,1,n) {
        f1[i] = a[i];
        FO(j,0,i) {
            if( a[i] > a[j] ) {
                f1[i] = max(f1[i],f1[j]+a[i]);
            }
        }
    }
    FORD(i,n,1) {
        f2[i] = a[i];
        for(int j = n+1; j > i ;j-- ) {
            if( a[i] > a[j] ) {
                f2[i] = max(f2[i],f2[j]+a[i]);
            }
        }
    }
    LL ans = 0;
    FOR(i,1,n) {
        ans = max(ans,f1[i]+f2[i]-a[i]);
    }
    cout << ans << endl;
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
