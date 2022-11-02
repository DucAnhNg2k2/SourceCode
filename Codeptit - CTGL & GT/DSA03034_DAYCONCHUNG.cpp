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

void solve() {
	int n,m,k;
    cin >> n >> m >> k;
    LL a[n+5],b[m+5],c[k+5];
    FOR(i,1,n) {
        cin >> a[i];
    }
    FOR(i,1,m) {
        cin >> b[i];
    }
    FOR(i,1,k) {
        cin >> c[i];
    }
    int i = 1, j = 1, o = 1;
    vector<LL> v;
    while( i <= n && j <= m && o <= k) {
        if( a[i] == b[j] && b[j] == c[o] ) {
            v.pb(a[i]);
            i++;
            j++;
            o++;
        }
        else {
            LL Max = max({a[i],b[j],c[o]});
            if( a[i] < Max ) i++;
            if( b[j] < Max ) j++;
            if( c[o] < Max ) o++;
        }
    }
    if( v.size() == 0 ) cout << "NO";
    for(auto i : v) cout << i << ' ';
    cout << endl;
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
