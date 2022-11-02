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
	stack<char> st;
	string res = "";
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( level(s[i]) == 1 ) {
			res += s[i];
		}
		else if( s[i] == '(' ) {
			st.push(s[i]);
		}
		else if( s[i] == ')' ) 
		{
			while( st.top() != '(' )
			{
				res += st.top() ;
				st.pop() ;
			}
			st.pop() ;
		}
		else
		{
			while( !st.empty() && level(s[i]) <= level(st.top()) )
			{
				res += st.top();
				st.pop() ;
			}
			st.push(s[i]);
		}
	}
	while( st.size()) {
		res += st.top();
		st.pop();
	}
	cout << res << endl;
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