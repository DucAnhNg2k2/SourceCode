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
#define maxn 100005

int x[maxn],n,stop;
bool vs[maxn] = {};
string s = " ";
string check = "UEOAI";
void Xuat() {
	FOR(i,2,n-1) {
		int dem = 0;
		bool check2 = false;
		FOR(j,0,4) {
			if( s[x[i]] == check[j] ) {
				check2 = true;
			}
		}
		bool check1 = true;
		FOR(j,0,4) {
			if( s[x[i-1]] == check[j] ) {
				check1 = false;
				break;
			}
		}
		if( check1 ) dem++;
		check1 = true;
		FOR(j,0,4) {
			if( s[x[i+1]] == check[j] ) {
				check1 = false;
				break;
			}
		}
		if( check1 ) dem++;
		if( dem == 2 && check2 ) return;
	}
	FOR(i,1,n) {
		cout << char(s[x[i]]);
	}	
	cout << endl;
}

void Try(int i) {
	for(int j = 1 ; j <= n ; j++ ) {
		if( vs[j] == false ) {
			vs[j] = true;
			x[i] = j;
			if( i < n ) Try(i+1);
			else Xuat();
			vs[j] = false;
		}
	}
}
void solve() {
	char c;
	cin >> c;
	n = c - 'A'+1;
	Try(1);
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	FOR(i,'A','Z') s += i;
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

