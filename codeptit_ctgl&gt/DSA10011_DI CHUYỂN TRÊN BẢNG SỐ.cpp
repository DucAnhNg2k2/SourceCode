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

pair<int,int> s[] = {{1,0},{-1,0},{0,1},{0,-1}};
void solve() {
    int n,m;
    cin >> n >> m;
    vector<vector<long long>> f(n+5,vector<long long>(m+5,inf));
    vector<vector<long long>> a(n+5,vector<long long>(m+5,inf));
    FOR(i,1,n) {
        FOR(j,1,m) {
            cin >> a[i][j];
        }
    }
    f[1][1] = a[1][1];
    queue<pair<int,int>> q;
    q.push({1,1});
    while(q.size()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++ ) {
                int _x = x-s[i].fi;
                int _y = y-s[i].se;
                if( _x == x && _y == y ) continue;
                if( f[x][y] + a[_x][_y] < f[_x][_y]) {
                    f[_x][_y] = f[x][y] + a[_x][_y];
                    q.push({_x,_y});
            }
        }
    }
    cout << f[n][m] << endl;
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