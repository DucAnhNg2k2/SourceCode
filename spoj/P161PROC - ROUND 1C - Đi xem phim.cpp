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
    int n,k;
    cin >> n >> k;
    int dd[k+5] = {}, a[n+5] = {};
    FOR(i,1,n) {
        cin >> a[i];
    }
    int s[n+5] = {}, length = 1;
    FOR(i,1,n) {
        if(length==1) {
            s[length++] = a[i];
        }
        else {
            if(a[i] != s[length-1]) {
                s[length++] = a[i];
            }
        }
    }
    length--;
    FOR(i,2,length-1) {
        if(s[i-1] == s[i+1]) {
            dd[s[i]] += 2;
        }
        else {
            dd[s[i]] += 1;
        }
    }
    dd[s[1]]++;
    dd[s[length]]++;
    int ans = IMAX, res = -1;
    FOR(i,1,k) {
        if(ans > length-1-dd[i]) {
            ans = length-1-dd[i];
            res = i;
        }
    }
    cout << res;
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