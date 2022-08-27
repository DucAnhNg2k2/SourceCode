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

int getDistance(int x1,int y1,int x2,int y2) {
    return abs(x1-x2) + abs(y1-y2);
}
void solve() {
    int n,m,sx,sy,d;
    cin >> n >> m >> sx >> sy >> d;
    bool check = true;
    FOR(i,1,n) {
        if(getDistance(i,1,sx,sy) <= d) check = false;
    }
    FOR(j,1,m) {
         if(getDistance(n,j,sx,sy) <= d) check = false;
    }
    if(check) {
        cout << n+m-2 << endl;
        return;
    }
    check = true;
    FOR(j,1,m) {
         if(getDistance(1,j,sx,sy) <= d) check = false;
    }
    FOR(i,1,n) {
         if(getDistance(i,m,sx,sy) <= d) check = false;
    }
    if(check) {
        cout << n+m-2 << endl;
        return;
    }
    cout << -1 << endl;
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