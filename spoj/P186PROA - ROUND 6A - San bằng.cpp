#pragma GCC optimize("O2")
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
const int IMAX = 1e9;
const LL LMAX = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 1000005


void solve() {
    int m,n,d;
    cin >> m >> n >> d;
    LL a[m*n+5], sum = 0, ans = IMAX, f1[m*n+5] = {}, f2[m*n+5] = {};
    FOR(i,1,m*n) {
        cin >> a[i];
        sum += a[i];
    }
    FOR(i,1,m*n) {
        if(a[i]%d != a[1]%d) {
            cout << -1 << endl;
            return;
        }
    }
    sort(a+1,a+1+m*n);
    FOR(i,1,m*n) {
        f1[i] = f1[i-1] + a[i];
    }
    FORD(i,m*n,1) {
        f2[i] = f2[i+1] + a[i];
    }
    FOR(i,1,m*n) {
        LL dem1 = a[i]*(i-1) - f1[i-1];
        LL dem2 = f2[i+1] - a[i]*(m*n-i);
        ans = min(ans,(dem1+dem2)/d);
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
   freopen("test.in","r",stdin);
   freopen("test.out","w",stdout);
#endif
	int T = 1;
//    cin >> T;
	while(T--) {
        solve();
    }
    return 0;
}
