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
    int n,m;
    cin >> n;
    LL a[100],b[100];
    FOR(i,1,n) cin >> a[i];
    cin >> m;
    FOR(i,1,m) cin >> b[i];
    sort(a+1,a+1+n,greater<LL>());
    sort(b+1,b+1+m,greater<LL>());
    if(a[1] >= b[1]) cout << "Alice" << endl;
    else cout << "Bob" << endl;
    if(a[1] <= b[1]) cout << "Bob" << endl;
    else cout << "Alice" << endl;
}

int main(){
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