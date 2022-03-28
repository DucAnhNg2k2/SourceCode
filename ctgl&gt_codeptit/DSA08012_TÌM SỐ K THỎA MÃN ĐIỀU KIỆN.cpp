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
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 998244353;
#define maxn 100005

bool check(int n) {
    int f[10] = {};
    while(n >0) {
        if( f[n%10] ) return false;
        f[n%10] = true;
        n/=10;
    }
    return true;
}

void solve() {
    bool f[maxn] = {};
    int l,r;
    cin >> l >> r;
    queue<int> q;
    q.push(0);
    f[0] = true;
    int dem = 0;
    while(q.size()) {
        int top = q.front();q.pop();
        if( top >= l ) {
         //   cout << top << endl;
            dem++;
        }
        FOR(i,0,5) {
            int temp = top*10 + i;
            if( temp <= r && f[temp] == false && check(temp)) {
                q.push(temp);
                f[temp] = true;
            }
        }
    }
    cout << dem << endl;
}

int main() {
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
