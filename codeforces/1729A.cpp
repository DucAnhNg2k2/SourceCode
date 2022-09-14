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
#define maxn 10000005

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int time1 = a-1;
    int time2;
    if(b <= c) time2 = c-b+c-1;
    else time2 = b-1;
    // cout << time1 << ' ' << time2 << endl;
    if(time1 < time2) {
        cout << 1 << endl;
    }
    else if(time1 > time2) {
        cout << 2 << endl;
    }
    else cout << 3 << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
   freopen("test.in","r",stdin);
   freopen("test.out","w",stdout);
#endif
	int T = 1;
    cin >> T;
	while(T--) {
        solve();
    }
    return 0;
}
