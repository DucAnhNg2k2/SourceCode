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
// https://codeforces.com/contest/1475/problem/B
using namespace std;
 
typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005


vector<int> f(1000005,false);	
void solve() {
	int n;
	cin >> n;
	if( f[n] ) cout << "YES\n";
	else cout << "NO\n";
}
 
int main(){
  ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	f[2020] = true;
	f[2021] = true;
	FOR(i,2022,1e6) {
		if( f[i-2020] || f[i-2021] ) f[i] = true;
	}
	int t = 1;
	cin >> t;
	while( t-- ) 
    	solve();
    return 0;
} 
