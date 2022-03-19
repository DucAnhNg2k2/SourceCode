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
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	int s,n;
	cin >> n >> s;
	string ans = "";
	int a[n+5] = {};
	if( n*9 < s || n == 0 || s == 0 ) cout << "-1 -1" << endl;
	else {
		int sum = s;
		FORD(i,n,1) {
			if( sum > 9 ) {
				a[i] = 9;
				sum -= 9;
			}
			else {
				if( i == 1 ) a[i] = sum;
				else {
					if( sum > 1 ) a[i] = sum-1;
					else a[i] = 0;
					FORD(j,i-1,1) {
						a[j] = 0;
					}
					a[1] = 1;
				}
				break;
			}
		}
		FOR(i,1,n) 
			cout << a[i];
		cout << ' ';

		sum = s;
		FOR(i,1,n) {
			if( sum >= 9 ) {
				cout << 9;
				sum -= 9;
			}
			else {
				if( sum == 0 ) cout << 0;
				else {
					cout << sum;
					sum = 0;
				}
			}
		}
		cout << endl;
	}
	int dem = 0, max = -10000;
	for(int i = 0; i < n; i++ ) {
		if( max < a[i] ) {
			max = a[i];
			dem++;
		}
		else if( max == a[i]) {
			dem++;
		}
	}
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