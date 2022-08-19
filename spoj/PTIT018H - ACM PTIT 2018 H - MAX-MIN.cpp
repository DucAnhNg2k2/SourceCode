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

int f[1005][1005] = {};
int a[1005];
void solve() {
    int n;
    cin >> n;
    FOR(i,1,n) {
        cin >> a[i];
    }
    FOR(k,1,n) {
        deque<int> dq;
        FOR(i,1,n) {
            while(dq.size() && a[dq.back()] >= a[i]) dq.pop_back();
            dq.push_back(i);
            if(dq.front() + k <= i) dq.pop_front();
            if(i >= k) f[i][k] = a[dq.front()];
        }
    }
    FOR(k,1,n) {
        int ans = -1;
        FOR(i,1,n) {
            if(f[i][k] == 0) continue;
            ans = max(ans,f[i][k]);
        }
        cout << ans << ' ';
    }
    cout << endl;
}

int main() {
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
