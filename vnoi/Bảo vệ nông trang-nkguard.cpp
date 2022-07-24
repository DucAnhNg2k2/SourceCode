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
const LL MOD = 1e9+7;
#define PI 3.141592653589793238;
#define maxn 100000

pII mv[8] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
void solve() {
    int n,m;
    cin >> n >> m;
    int a[n+5][m+5] = {};
    vector<pair<int,pII>> v;
    FOR(i,1,n) {
        FOR(j,1,m) {
            cin >> a[i][j];
            v.pb({a[i][j],{i,j}});
        }
    }
    sort(v.begin(),v.end(),[](pair<int,pII> a,pair<int,pII> b) {
        return a.fi > b.fi;
    });
    int dem = 0;
    for(auto i:v) {
        int x = i.se.fi, y = i.se.se;
        if(a[x][y] > 0) {
            dem++;
            queue<pair<int,pII>> q;
                q.push({a[x][y],{x,y}});
                a[x][y] = 0;
                while(q.size()) {
                    auto top = q.front(); q.pop();
                    int X = top.se.fi;
                    int Y = top.se.se;
                    int val = top.fi;
                    FOR(k,0,7) {
                        int x = X + mv[k].fi;
                        int y = Y + mv[k].se;
                        if(a[x][y] != 0 && a[x][y] <= val) {
                            q.push({a[x][y],{x,y}});
                            a[x][y] = 0;
                        }
                    }
                }
        }
    }
    cout << dem;
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