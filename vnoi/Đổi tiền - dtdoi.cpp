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
    int n,s;
    cin >> n >> s;
    int a[n+5];
    vector<int> f(50005,IMAX);
    FOR(i,1,n) {
        cin >> a[i];
    }
    f[0] = 0;
    FOR(i,1,50000) {
        FOR(j,1,n) {
            if(i >= a[j]) {
                f[i] = min(f[i],f[i-a[j]]+1);
            }
        }
    }
    sort(a+1,a+1+n);
    if(s >= 50000) {
       for(int i = 50000; i >= 0; i--) {
            if((s-i) % a[n] == 0) {
                cout << f[i] + (s-i)/a[n] << endl;
                return;
            }
       }
    }
    cout << f[s] << endl;
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