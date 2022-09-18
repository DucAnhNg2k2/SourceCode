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

int ans = IMAX;
int N,L,H;
int a[100], b[100], c[100];

void Try(int y) {
    int sum = L;
    FOR(i,1,N) {
        if(y <= b[i]) {
            sum += b[i] + 1 - y;
            y = b[i] + 1;
        }
        int length = H - c[i]; // can move
        if(y >= length) {
            sum += y-length;
            y = length;
        }
    }
    ans = min(ans,sum);
}

void solve() {
    cin >> N >> L >> H;
    FOR(i,1,N) {
        cin >> a[i] >> b[i] >> c[i];
    }
    FOR(i,1,H) {
        Try(i);
    }
    cout << ans << endl;
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