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
    LL a[n+5],f[n+5][2] = {};
    FOR(i,1,n-1) {
        cin >> a[i];
    }
    if(n >= 2) {
        f[2][0] = f[2][1] = a[1]; // 2 always conenct 1
        if(n == 3) {
            // if N = 3 is 1->2->3
            f[3][1] = a[1] + a[2]; 
        }
        else if(n > 3) {
            f[3][0] = a[1];  // not connect 1->2 X 3
            f[3][1] = a[1] + a[2]; // connect 1->2->3
        }
    }
    FOR(i,4,n) {
        // not connect (i-2)->(i-1) X (i)
        f[i][0] = f[i-1][1];

        /* 
        connect:
        TH1: (i-2) X  (i-1) -> (i)
        TH2: (i-2) -> (i-1) -> (i)
        */
        f[i][1] = min(f[i-1][0],f[i-1][1]) + a[i-1];
    }
    cout << f[n][1] << endl;
}

int main() {
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