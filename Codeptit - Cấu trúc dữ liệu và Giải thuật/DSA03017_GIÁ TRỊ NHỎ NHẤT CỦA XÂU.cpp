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
	int k;
	cin >> k;
	string s;
	cin >> s;
	int d[300] = {};
	for(auto i:s) {
		d[i]++;
	}
	priority_queue<int> q;
	for(auto i:d) {
		if( i != 0 ) q.push(i);
	}
	while ((k--))
	{
		int x = q.top();
		q.pop();
		x--;
		q.push(x);
	}
	int sum = 0;
	while(q.size()) {
		sum += q.top()*q.top();
		q.pop();
	}
	cout << sum << endl;
}		 

int main(){
 //   ios::sync_with_stdio(false);
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