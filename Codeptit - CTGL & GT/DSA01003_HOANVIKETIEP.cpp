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

int x[maxn],n,stop;

void Init() {
	stop = 0;
	FOR(i,1,n) {
		x[i] = i;
	}
}

void Xuat() {
	FOR(i,1,n) {
		cout << x[i] ;
	}
	cout << endl;
}

void Sinh() {
	int i = n-1;
	while( i >= 1 && x[i] > x[i+1] ) {
		i--;
	}
	if( i == 0 ) {
		stop = true;
		FOR(i,1,n) {
			cout << i << ' ';
		}
		cout << endl;
		return;
	}
	int pos = n;
	while( x[i] > x[pos] ) {
		pos--;
	}
	swap(x[i],x[pos]);
	int l = i+1 , r = n;
	while( l < r ) {
		swap(x[l++],x[r--]);
	}
	FOR(i,1,n) {
		cout << x[i] << ' ';
	}
	cout << endl;
}

void Program() {
//	Init();
//	while( !stop ) {
		Sinh();
//		Xuat();
//	}
}

void solve() {
	cin >> n;
	FOR(i,1,n) {
		cin >> x[i];
	}
	Program();
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
