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

int f[105][105], n,m,k, trave[105][105];

void solve() {
    int n;
    cin >> n;
    LL a[n+5],f[n+5];
    FOR(i,1,n) cin >> a[i];
    f[1] = a[1];
    LL res = 1;
    FOR(i,2,n) {
        if(f[res] < a[i]) f[++res] = a[i];
        else {
            int l = 1, r = res;
            while(l<r) {
                int m =(l+r)/2;
                if(f[m] < a[i]) l = m+1;
                else r = m;
            }
            f[r] = a[i];
        }
    }
    cout << res;
}
 
int main() {
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