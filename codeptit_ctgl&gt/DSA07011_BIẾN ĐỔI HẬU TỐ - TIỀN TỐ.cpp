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

int level(char s) {
	if( s == '^') return 4;
	if( s == '*' || s == '/' || s == '%' ) return 3;
	if( s == '+' || s == '-') return 2;
	if( s == '(' || s == ')' ) return 0;
	return 1;
}

void solve() {
	string s;
	cin >> s;
	stack<string> st;
	string res = "";
	for(auto i:s) {
		if( level(i) != 1 ) {
			string q1 = st.top(); st.pop();
			string q2 = st.top(); st.pop();
			string temp = i + q2 + q1;
			st.push(temp);
		}
		else st.push(string(1,i));
	}
	cout << st.top() << endl;
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