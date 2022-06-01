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
#define maxn 1005

void solve() {
	map<LL,LL> m;
    map<LL,LL> m1;
    int n;
    cin >> n;
    pLL a[n+5];
    FOR(i,1,n) {
        cin >> a[i].fi;
        a[i].se = i;
        m[a[i].fi] = i; 
        m1[a[i].fi]++;
    }
    for(auto i:m1) {
        if(i.second == 1) {
            cout << -1 << endl;
            return;
        }
    }
    LL val = -1;
    FOR(i,1,n) {
        if(val != a[i].fi) {
            val = a[i].fi;
            cout << m[a[i].fi] << ' ';
        }
        else {
            cout << a[i-1].se << ' ';
        }
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
