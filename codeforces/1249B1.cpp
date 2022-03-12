#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FO(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl

using namespace std;
// https://codeforces.com/problemset/problem/1249/B1
typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005

int dsu(int i,int a[]) {
	int cnt = 1 , pos = i;
	while( a[pos] != i ) {
		pos = a[pos];
		cnt++;
	}
	return cnt;
}

void solve() {
	int n;
	cin >> n;
	int a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
	}
	FOR(i,1,n) {
		cout << dsu(i,a) << ' ';
	}
	cout << endl;
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
