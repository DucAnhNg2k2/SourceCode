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
    int n,P,Q;
    cin >> n >> P >> Q;
    int a[n+5];
    vector<int> f(n+5,IMAX);
    FOR(i,1,n) {
        cin >> a[i];
    }
    queue<int> q;
    f[P] = 0;
    q.push(P);
    while(!q.empty()) {
        int top = q.front(); q.pop();
        if(f[top+1] > f[top]+1 && top+1 <= n) {
            f[top+1] = f[top]+1;
            q.push(top+1);
        }
        if(f[top-1] > f[top]+1 && top-1 >= 1) {
            f[top-1] = f[top]+1;
            q.push(top-1);
        }
        FOR(i,1,n) {
            if(a[i] == a[top] && f[i] > f[top]+1) {
                f[i] = f[top]+1;
                q.push(i);
            }
        }
    }
    cout << f[Q] << endl;
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
