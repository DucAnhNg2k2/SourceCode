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
#define maxn 1000005

void solve() {
    int n;
    cin >> n;
    double a[n+5],b[n+5]; int f[n+5];
    FOR(i,1,n) {
        cin >> a[i] >> b[i];
    }
    f[1] = 1;
    FOR(i,2,n) {
        f[i] = 1;
        FO(j,1,i) {
            if(a[i] > a[j] && b[i] < b[j] && f[i] < f[j]+1) f[i] = f[j]+1;
        }
    }
    int ans = 0;
    FOR(i,1,n) {
        ans = max(ans,f[i]);
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