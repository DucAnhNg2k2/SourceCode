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
#define maxn 100005

LL n,m;
LL get1(LL n,LL m) {
    n++;
    LL x = m/(n);
    LL a = n*x + n - m, b = n-a;
    return -(a*x*x)-b*(x+1)*(x+1);
}

LL get2(LL n,LL kc) {
    kc--;
    return (kc) + (n-kc)*(n-kc);
}

void solve() {
    if(n == 0) {
        cout << -m*m << endl;
        return;
    }
    LL ans = -LMAX;
    for(int i = 1; i <= n; i++) {
        LL kc = i;
        ans = max(ans,get2(n,i)+get1(i,m));
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
	//cin >> T;
	while( true ) {
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        solve();
    }
    return 0;
}
