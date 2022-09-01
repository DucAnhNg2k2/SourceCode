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
    int n,m;
    cin >> n >> m;
    LL a[m+5] = {};
    FOR(i,1,m) {
        cin >> a[i];
    }
    a[0] = 1; a[m+1] = n;
    vector<vector<LL>> f(105,vector<LL>(105,IMAX));
    FOR(i,1,n) {
        FOR(j,1,n) {
            cin >> f[i][j];
        }
    }
    FOR(k,1,n) {
        FOR(i,1,n) {
            FOR(j,1,n) {
                f[i][j] = min(f[i][j],f[i][k]+f[k][j]);
            }
        }
    }
    LL ans = 0;
    FOR(i,1,m+1) {
        ans += f[a[i-1]][a[i]];
    }
    cout << ans;
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