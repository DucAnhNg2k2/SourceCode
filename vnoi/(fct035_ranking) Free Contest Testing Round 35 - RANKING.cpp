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
#define maxn 1000005


void solve() {
    int n;
    cin >> n;
    LL a[n+5];
    FOR(i,1,n) {
        cin >> a[i];
    }
    sort(a+1,a+1+n,greater<int>());
    LL val = 0, rank = -1, sum = 0;
    FOR(i,1,n) {
        if(a[i] != rank) {
            rank = a[i];
            val++;
        }
        sum += val;
    }
    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
   freopen("test.in","r",stdin);
   freopen("test.out","w",stdout);
#endif
	int T = 1;
//    cin >> T;
	while(T--) {
        solve();
    }
    return 0;
}
