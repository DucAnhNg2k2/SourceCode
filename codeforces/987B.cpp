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
// https://codeforces.com/contest/987/problem/B
using namespace std;

typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005

void solve() {
	LL x,y;
	scanf("%lld%lld",&x,&y);
	if( x == y ) {
		printf("=\n");
		return ;
	}
	if( x < 10 && y < 10 ) {
		if( (LL)pow(x,y) < (LL)pow(y,x) ) printf("<");
		else if( (LL)pow(x,y) == (LL)pow(y,x) ) printf("=");
		else printf(">");
	}
	else if( x >= 10 && y >= 10 ) {
		if( x < y ) printf(">");
		else printf("<");
	}
	else if( x < 10 ) {
		if( x == 1 ) printf("<");
		else printf(">");
	}
	else if( x >= 10 ) {
		if( y == 1 ) printf(">");
		else printf("<");
	}
	printf("\n");
}

int main(){
  
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
