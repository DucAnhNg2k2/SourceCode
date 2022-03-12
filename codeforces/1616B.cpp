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
 
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	string s1 = "" , s2 = "";
	s1 += s[0];
	s2 += s[0];
	for(int i = 1 ; i < n ; i++ ) {
		if( s[i] > s1[s1.size()-1] ) break;
		s1 += s[i];
	}
	for(int i = 1 ; i < n ; i++ ) {
		if( s[i] >= s2[s2.size()-1] ) break;
		s2 += s[i];
	}
	string res1 = "", res2 = "";
	FO(i,0,s1.size()) res1 += s1[i];
	for(int i = s1.size()-1 ; i >= 0 ; i-- ) res1 += s1[i];
	
	FO(i,0,s2.size()) res2 += s2[i];
	for(int i = s2.size()-1 ; i >= 0 ; i-- ) res2 += s2[i];
	if( res1 < res2 ) cout << res1 << endl;
	else cout << res2 << endl;
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
