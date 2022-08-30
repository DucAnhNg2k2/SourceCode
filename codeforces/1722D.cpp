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
    int n;
    cin >> n;
    LL sum = 0;
    char s[n+5];
    LL a[n+5];
    LL b[n+5];
    LL c[n+5];
    vector<LL> v;
    FOR(i,1,n) {
        cin >> s[i];
        if(s[i] == 'L') {
            a[i] = i-1;
            b[i] = n-i;
        }
        else {
            a[i] = n-i;
            b[i] = i-1;
        }
        sum += a[i];
        if(b[i] > a[i]) {
            v.pb(b[i]-a[i]);
        }
    }
    sort(all(v),greater<LL>());
    int cnt = 0;
    for(int i = 0; i < v.size(); i++) {
        sum += v[i];
        cout << sum << ' ';
        cnt++;
    }
    while(cnt < n) {
        cnt++;
        cout << sum << ' ';
    }
    cout << endl;
    // FOR(i,1,n) {
    //     int top = q.pop();
    //     sum -= top;
    //     sum += 
    // }
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