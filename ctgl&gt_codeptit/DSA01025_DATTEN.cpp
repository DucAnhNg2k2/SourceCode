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

int n,k;
bool vs[500] = {};
int a[500] = {};

void Xuat() {
	FOR(i,1,k) {
		cout << char(a[i]-1+'A');
	}
	cout << endl;
}

void Try(int i,int max) {
	if( max > n ) {
		return;
	}
	for(int j = max+1 ; j <= n ; j++ ) {
		a[i] = j;
		if( i < k ) {
			Try(i+1,j);
		}
		else Xuat();
		a[i] = 0;
	}
}

void solve() {
	cin >> n >> k;
	Try(1,0);
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
