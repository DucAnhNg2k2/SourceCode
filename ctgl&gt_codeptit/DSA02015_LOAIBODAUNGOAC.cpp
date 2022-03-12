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

int n;
string str;
int size;
set<string> v;

void Try(int i,int dem,string s) {
	if( dem < 0 ) {
		return;
	}
	if( i >= n+1 ) {
		if( dem == 0 && s.size() > 1 ) {
			if( s.size() > size ) {
				size = s.size();
				v.clear();
				v.insert(s);
			} 
			else if( s.size() == size ) {
				v.insert(s);
			}
		}
		return;
	}
	if( str[i] == '(' ) {
		Try(i+1,dem+1,s+str[i]);
		Try(i+1,dem,s);
	}
	else if( str[i] == ')' ) {
		Try(i+1,dem-1,s+str[i]);
		Try(i+1,dem,s);
	}
	else Try(i+1,dem,s+str[i]);
}
void solve() {
	size = 0;
	v.clear();
	cin >> str;
	n = str.size();
	str = ' ' + str ;
	Try(1,0,"");
	for(auto i : v ) cout << i << ' ';
	if( v.empty() ) cout << -1;
	cout << endl;
}

int main() {
  //  ios::sync_with_stdio(false);
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

