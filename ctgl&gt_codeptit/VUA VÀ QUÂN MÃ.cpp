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

int n;
vector<vector<char>> s(105,vector<char>(105,'#'));
pII v,m;

vector<vector<int>> vsV(105,vector<int>(105,-1));
vector<vector<int>> vsM(105,vector<int>(105,-1));

pII moveV[] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}}; 
pII moveM[] = {{-2,-1},{2,-1},{-1,-2},{-1,2},{2,1},{-2,1},{1,2},{1,-2}};

bool pos(int x,int y) {
    if( x < 0 || x > n || y < 0 || y > n || s[x][y] == '#') return false;
    return true;
}

void solve() {
    cin >> n;
    FOR(i,1,n) {
        FOR(j,1,n) {
            cin >> s[i][j];
            if(s[i][j] == 'T') v = {i,j};
            if(s[i][j] == 'M') m = {i,j};
        }
    }
    queue<pair<pII,int>> q;
    q.push({v,0});
    vsV[v.fi][v.se] = 0;
    while(q.size()) {
        pair<pII,int> top = q.front(); q.pop();
        int x = top.fi.fi, y = top.fi.se, dem = top.se;
        FOR(i,0,7) {
            int X = x + moveV[i].fi , Y = y + moveV[i].se , DEM = dem+1;
            if( pos(X,Y) && vsV[X][Y] == -1) {
                vsV[X][Y] = DEM;
                q.push({{X,Y},DEM});
            }
        }
    }
    v = m;
    while(q.size()) q.pop();
    q.push({v,0});
    vsM[v.fi][v.se] = 0;
    while(q.size()) {
        pair<pII,int> top = q.front(); q.pop();
        int x = top.fi.fi, y = top.fi.se, dem = top.se;
        FOR(i,0,7) {
            int X = x + moveM[i].fi , Y = y + moveM[i].se , DEM = dem+1;
            if( pos(X,Y) && vsM[X][Y] == -1) {
                vsM[X][Y] = DEM;
                q.push({{X,Y},DEM});
            }
        }
    }
    int ans = inf;
    FOR(i,1,n) {
        FOR(j,1,n) {
            if(vsM[i][j] != -1 && vsV[i][j] != -1) {
                int sub = abs(vsM[i][j]-vsV[i][j]);
                if(sub%2 ==0) ans = min(ans,max(vsM[i][j],vsV[i][j]));
            }
        }
    }
    if(ans == inf) cout << -1;
    else cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}