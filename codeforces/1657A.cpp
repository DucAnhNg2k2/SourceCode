#include<bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;
// https://codeforces.com/contest/1657/problem/A
typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

int X,Y;

void solve() { 
	cin >> X >> Y;
	if( X == 0 && Y == 0 ) {
		cout << 0 << endl;
		return;
	}
	LL s = X*X + Y*Y;
	LL a = sqrt(s);
	if( a*a == s ) {
		cout << 1 << endl;
		return;
	}
	FOR(i,0,500) {
		FOR(j,0,500) {
			LL x = i-X,y = j-Y;
			LL num = x*x + y*y;
			LL _x = sqrt(num);
			LL num1 = i*i + j*j;
			LL __x = sqrt(num1);
			if( _x*_x == num && __x*__x == num1 ) {
				cout << 2 << endl;
				return;
			}
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
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}