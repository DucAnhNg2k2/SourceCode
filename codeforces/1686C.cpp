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
#define int LL 

void solve() {
    int n;
    cin >> n;
    LL a[n+5], b[n+5] = {};
    FOR(i,1,n) {
        cin >> a[i];
    }
    if(n&1) {
        cout << "NO" << endl;
        return;
    }
    sort(a+1,a+1+n);
    b[1] = b[n+1] = a[1];
    int index = n;
    for(int i = 2; i <= n; i += 2) {
        b[i] = a[index--];
    }
    // FOR(i,1,n) cout << b[i] << ' ';
    // cout << endl;
    deque<LL> dq;
    FOR(i,2,index) {
        dq.push_back(a[i]);
    }
    index = n;
    while(index > 2) {
        if(dq.empty()) {
            break;
        }
        if(dq.front() == dq.back() && dq.front() == b[index]) {
            cout << "NO" << endl;
            return;
        }    
        while(dq.back() == b[index]) {
            LL t = dq.back();
            dq.pop_back();
            dq.push_front(t);
        }
        b[index-1] = dq.back();
        dq.pop_back();
        index -= 2;
    }
     FOR(i,2,n) {
        if( (b[i]-b[i-1])*(b[i]-b[i+1]) <= 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    FOR(i,1,n) cout << b[i] << ' ';
    cout << endl;
}

main(){
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