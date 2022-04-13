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
#define maxn 100005

bool check(int n) {
    FOR(i,0,3) {
        if( (n>>i)&1 && (n>>(i+1))&1 ) return false;
    }
    return true;
}

bool check1(int n,int m) { 
    for(int i =0 ; i <= 3 ;i++) {
        if((n>>i)&1 && (m>>i)&1 ) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    LL A[n+5][4] = {};
    LL m = -Linf;
    FOR(j,1,4) {
        FOR(i,1,n) {
            cin >> A[i][j];
            m = max(m,A[i][j]);
        }
    }
    vector<vector<LL>> f(n+5,vector<LL>(20,0));
    FOR(i,1,n) {
        FOR(j,0,15) {
            if(check(j)) { 
                FOR(k,0,15) { 
                    if(check1(j,k)) {
                        LL sum = 0;
                        FOR(pos,0,3) {
                            if((j>>pos)&1) sum += A[i][4-pos];
                        }
                        f[i][j] = max(f[i][j],f[i-1][k]+sum);
                    }
                }
            }
        }
    }
    if( m < 0 ) {
        cout << m << endl;
        return;
    }
    LL ans = 0;
    FOR(i,0,15) {
        ans = max(ans,f[n][i]);
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}