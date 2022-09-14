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
    string s;
    cin >> s;
    int n = s.size(); s = " " + s;
    vector<int> g[300] = {};
    FOR(i,1,n) {
        g[s[i]].pb(i);
    }
    int x = s[1], y = s[n], val = abs(x-y), dem = 0;
    if(x > y) swap(x,y);
    FOR(i,x,y) {
        dem += g[i].size();
    }
    cout << val << ' ' << dem << endl;
    if(s[1] <= s[n]) {
        FOR(i,s[1],s[n]) {
            for(auto j : g[i]) {
                cout << j << ' ';
            }
        }
        cout << endl;
    }
    else {
        FORD(i,s[1],s[n]) {
            for(auto j : g[i]) {
                cout << j << ' ';
            }
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
   freopen("test.in","r",stdin);
   freopen("test.out","w",stdout);
#endif
	int T = 1;
    cin >> T;
	while(T--) {
        solve();
    }
    return 0;
}
