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
#define maxn 1000005

vector<LL> g;

int demCs(LL n) {
    int cnt = 0;
    while(n>0) {
        cnt++;
        n/=10;
    }
    return cnt;
}

void init() {
    queue<LL> q;
    q.push(1);
    while(q.size()) {
        LL top = q.front(); q.pop();
        int cnt = demCs(top);
        if( cnt > 17 ) continue;
        g.pb(top);
        q.push(top*10+0);
        q.push(top*10+1);
    }
}

void solve() {
    LL n;
    cin >> n;
    int l = 0 , r = g.size()-1;
    while( l < r ) {
        int m = (l+r)/2;
        if( g[m] < n ) l = m+1;
        else r = m;
    }
    if(g[l] > n) l--;
    cout << l+1 << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
    init();
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}