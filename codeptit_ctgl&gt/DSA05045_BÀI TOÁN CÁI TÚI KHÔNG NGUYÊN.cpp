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

struct CaiTui {
	double A,C,F;
};

void solve() {
	LL n,W;
	cin >> n >> W;
	CaiTui arr[n+5];
	FOR(i,1,n) {
		cin >> arr[i].A >> arr[i].C;
		arr[i].F = arr[i].A / arr[i].C;
	}
	sort(arr+1,arr+1+n,[](CaiTui a,CaiTui b){
		return a.F > b.F;
	});
	double sum = 0;
	FOR(i,1,n) {
		if( W > arr[i].C) {
			sum += arr[i].A;
			W -= arr[i].C;
		}
		else {
			sum += W*arr[i].F;
			break;
		}
	}
	cout << setprecision(2) << fixed << sum << endl;
}

int main(){
    ios::sync_with_stdio(false);
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
