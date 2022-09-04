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

int binarySearchLeft(LL a[], int l,int r,LL x) {
    if(x < a[l]) 
        return -1;
    if(a[r] < x) 
        return r+1;
    while(l < r) {
        int m = (l+r)/2;
        if(a[m] < x) l = m+1;
        else r = m;
    }
    return l;
}

void solve() {
    int n,m;
    cin >> n >> m;
    LL a[n+5],b[m+5];
    FOR(i,1,n) cin >> a[i];
    FOR(i,1,m) cin >> b[i];
    FOR(i,1,m) {
        int idx = binarySearchLeft(a,1,n,b[i]);
        if((idx == -1) || (idx == n+1) || (a[idx] != b[i])) cout << 0 << ' ';
        else cout << idx << ' ';
    }
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