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
const double eps = 1e-6;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 1000005

int dd[maxn] = {0} , Maxarr = -1;

bool check(int du,int so) {
	int tmp = so;
	while( tmp <= Maxarr ) {
		if( dd[tmp+du] ) 
			return true;
		tmp += so;
	}
	return false;
}

void solve() {
	int n , Max = 0;
	cin >> n;
	int a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
		dd[a[i]]++;
	}
	sort(a+1,a+1+n);
	Maxarr = a[n];
	
	FOR(i,1,n-1) {
		int left = Max+1 , right = a[i]-1;
		for(int j = left ; j <= right ; j++ ) {
			if( check(j,a[i]) ) {
				Max = j;
			}
		}
	}
	cout << Max << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false);
//#ifndef ONLINE_JUDGE
//    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
//#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
