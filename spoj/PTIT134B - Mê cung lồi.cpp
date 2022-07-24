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

int s[100][100] = {},n,m;

bool Try(int x1,int x2,int y1,int y2) {
    if(y1 > y2) {
        swap(x1,x2);
        swap(y1,y2);
    }
    if(x1 < x2) {
        bool check = true;
        FOR(t,y1,y2) {
            if(s[x1][t] == false) check = false;
        }
        if(check) {
            FOR(t,x1,x2) {
                if(s[t][y2] == false) check = false;
            }
            if(check) return true;
        }
        check = true;
        FOR(t,x1,x2) {
            if(s[t][y1] == false) check = false;
        }
        if(check) {
            FOR(t,y1,y2) {
                if(s[x2][t] == false) check = false;
            }
            if(check) return true;
        }
        return false;
    }
    else {
        bool check = true;
        FOR(t,y1,y2) {
            if(s[x1][t] == false) check = false;
        }
        if(check) {
            FORD(t,x1,x2) {
                if(s[t][y2] == false) check = false;
            }
            if(check) return true;
        }
        check = true;
        FORD(t,x1,x2) {
            if(s[t][y1] == false) check = false;
        }
        if(check) {
            FOR(t,y1,y2) {
                if(s[x2][t] == false) check = false;
            }
            if(check) return true;
        }
        return false;
    }
}

void solve() {
    cin >> n >> m;
    FOR(i,1,n) {
        FOR(j,1,m) {
            char x;
            cin >> x;
            if(x == 'W') s[i][j] = 0;
            else s[i][j] = 1;
        }
    }
    FOR(i,1,n) {
        FOR(j,1,m) {
            if(s[i][j]) {
                FOR(k1,1,n) {
                    FOR(k2,1,m) {
                        if(s[k1][k2]) {
                            if(Try(i,k1,j,k2) == false) {
                                cout << "NO" << endl;
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "YES" << endl;
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