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
#define maxn 1000005

int n;
void solve() {
	int a[n+5][n+5] = {};
	FOR(i,1,n) {
		FOR(j,1,n) {
			cin >> a[i][j];
		}
	}
	vector<int> group(n+5,-1);
	FOR(i,1,n) {
		if( group[i] == -1) {
			group[i] = 1;
			queue<int> q;
			q.push(i);
			while(q.size()) {
				int i = q.front();q.pop();
				FOR(j,1,n) {
					if(a[i][j] == 1) {
						if( group[j] == -1) {
							if(group[i]==1) group[j] =2;
							else group[j] = 1;
							q.push(j);
						}
						else if(group[i]==group[j]) {
							cout << "NO" << endl;
							return;
						}
					}
				}
			}
		}
	}
	cout << "YES" << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	while(true) {
		cin >> n;
		if( n==0 ) break;
		solve();
	}
}