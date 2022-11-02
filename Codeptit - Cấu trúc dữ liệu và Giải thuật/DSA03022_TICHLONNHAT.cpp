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
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

int x[25],n = 6;
vector<LL> v(7);
LL ans;
void Xuat() {
    int dem = 0;
    LL s = 1;
	FOR(i,1,n) {
		if( x[i] ) {
            dem++;
            s *= v[i];
        }
	}
	if( dem == 2 || dem == 3 ) {
        ans = max(ans,s);
    }
}

void Try(int i) {
	for(int j = 0 ; j <= 1 ; j++ ) {
		x[i] = j;
		if( i < n ) Try(i+1);
		else Xuat();
	}	
}

void solve() {
	int n;
    cin >> n;
    LL a[n+5];
    FOR(i,1,n) {
        cin >> a[i];
    }
    sort(a+1,a+1+n);

    FOR(i,1,3) {
        v[i] = a[i];
    }
    int s = 4;
    FORD(i,n,n-2) {
        v[s++] = a[i];
    }
    ans = -Linf;
    Try(1);
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
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
