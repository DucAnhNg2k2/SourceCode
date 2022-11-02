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

const LL val = 1e10 + 5;

void setV(vector<LL> &v) {
    LL i = 1;
    while(true) {
        if(i*i > val) break;
        v.pb(i*i);
        i++;
    }
}

int bs(int l,int r,vector<LL> &v,LL x) {
    while(l <= r) {
        int m = (l+r)/2;
        if(v[m] == x) return m;
        else if(v[m] < x) l = m+1;
        else r = m-1;
    }
    return -1;
}

void solve() {
    LL a;
    cin >> a;
    vector<LL> v;
    setV(v);
    const LL l = 2*a*a;
    for(int i = 0; i < v.size(); i++) {
        int idx = bs(1,v.size()-1,v,l-v[i]);
        if(idx != -1 && idx != i) {
            cout << "YES" << endl;
            return;
        }
    }    
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	//cin >> T;
	while( T-- )
    	solve();
    return 0;
}
