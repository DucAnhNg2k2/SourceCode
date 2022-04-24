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
#define all(x) x.begin(),x.end()
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
    int n;
    cin >> n;
    vector<int> pre(n+5,1);
    vector<int> h(n+5);
    vector<bool> node(n+5,false);
    h[1] = 1;
    FO(i,1,n) {
        int u,v;
        cin >> u >> v;
        pre[v] = u;
        h[v] = h[u]+1;
        node[u] = true;
    }
    FOR(i,1,n) {
        if(!node[i]) {
            int u = i;
            list<int> l;
            while( u != 1 ) {
                l.push_front(u);
                u = pre[u];
            }
            l.push_front(1);
            for(auto j:l) cout << j << ' ';
            cout << endl;
        }
    }
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