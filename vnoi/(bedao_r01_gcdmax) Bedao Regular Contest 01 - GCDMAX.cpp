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

void solve() {
    int n;
    cin >> n;
    LL f[n+5] = {}, f1[n+5] = {}, a[n+5] = {};
    FOR(i,1,n) {
        cin >> a[i];
    }
    f[1] = a[1];
    FOR(i,2,n) {
        f[i] = __gcd(f[i-1],a[i]);  
    }
    f1[n] = a[n];
    for(int i = n-1; i >= 1; i--) {
       f1[i] = __gcd(f1[i+1],a[i]);
    }
    if(n == 1) cout << 1'000'000'000;
    else {
        LL ans = max(f[n-1],f1[2]);
        FOR(i,2,n-1) {
            ans = max(ans,__gcd(f[i-1],f1[i+1]));
        }
        cout << ans;
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}