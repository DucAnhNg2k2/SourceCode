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

LL toLL(const string &s) {
	LL res = 0;
	for(int i = 0 ; i < s.size() ; i++ ) 
		res = res*10 + (int)(s[i]-'0');
	return res;
}

void solve() {
	string s;
	cin >> s;
	stack<string> st;
	string ans = "";
	for(auto i:s) {
		if( i == ']') {
			string res = "";
			while( st.size() && st.top() != "[" ) {
				res = st.top() + res;
				st.pop();
			}
			st.pop();
			string num = "";
			while( st.size() && st.top() >= "0" && st.top() <= "9" ) {
				num = st.top() + num;
				st.pop();
			}
			int dem;
			if( num == "" ) dem = 1;
			else dem = toLL(num);
			string a = "";
			FOR(j,1,dem) {
				a += res;
			}
			st.push(a);
		}
		else st.push(string(1,i));
	}
	while( st.size() ) {
		ans = st.top() + ans;
		st.pop();
	} 
	cout << ans << endl;
}		 

int main(){
//    ios::sync_with_stdio(false);
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