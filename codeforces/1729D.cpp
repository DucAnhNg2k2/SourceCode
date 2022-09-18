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

LL a[maxn] = {};
void solve() {
    int n;
    cin >> n;
    vector<LL> v1,v2;
    FOR(i,1,n) {
        cin >> a[i];
    }
    FOR(i,1,n) {
        LL x;
        cin >> x;
        a[i] = x - a[i];
        if(a[i] >= 0) v1.pb(a[i]);
        else v2.pb(a[i]);
    }
    sort(all(v1));
    sort(all(v2),greater<LL>());;
    int i1 = 0, i2 = 0, cnt = 0, dem = 0;
    while(i1 < v1.size() && i2 < v2.size()) {
        if(v1[i1] >= -v2[i2]) {
            i1++;
            i2++;
            cnt++;
        }
        else {
            i1++;
            dem++;
        }
    }
    while(i1 < v1.size()) {
        i1++;
        dem++;
    }
    cnt += dem/2;
    cout << cnt << endl;
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