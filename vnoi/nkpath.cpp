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
//const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

const LL MOD = 1e9;

int a[105][105], f[105][105]; 
int m,n;

void solve() {
    cin >> m >> n;
    FOR(i,1,m) {
        FOR(j,1,n) {
            cin >> a[i][j];
        }
    }
    LL sum = 0;
    FOR(i,1,m) f[i][1] = 1;
    FOR(p,1,m) {
        FOR(q,1,n) {
            FOR(i,1,p) {
                FOR(j,1,q) {
                    if(j < n && i+j < p+q && __gcd(a[i][j],a[p][q]) > 1) {
                        f[p][q] += f[i][j];
                        f[p][q] %= MOD;
                    }
                }
            }
        }
    }
    FOR(i,1,m) {
        sum += f[i][n];
        sum %= MOD;
    }
    cout << sum << endl;
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
