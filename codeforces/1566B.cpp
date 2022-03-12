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

typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005

void solve() {
	string s;
	cin >> s;
	bool check = true;
	FO( i , 0 , s.size() ) {
		if( s[i] != '1' ) {
			check = false;
			break;
		}
	}
	if( check ) cout << 0 << endl;
	else {
		int n = s.size() , f[n+5] ;
		f[0] = 0;
		s = '1' + s;
		FOR(i,1,n) {
			f[i] = f[i-1];
			if( s[i] == '0' && s[i-1] == '1' ) f[i]++;
		}
		if( f[n] >= 2 ) cout << 2 << endl;
		else cout << 1 << endl;
	}
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
//freopen("1.in","r",stdin);
//freopen("1.out","w",stdout);
	int t;
	cin >> t;
	while( t-- )
    	solve();
    return 0;
}
