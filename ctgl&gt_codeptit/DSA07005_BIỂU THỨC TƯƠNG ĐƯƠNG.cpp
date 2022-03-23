#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
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

typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

void solve() { 
	string s;
	cin >> s;
	stack<string> st;
	string ans = "";
	for(auto i:s) {
		if( i != ')') st.push(string(1,i));
		else {
			string temp = "";
			while( st.top() != "(") {
				temp = st.top() + temp;
				st.pop();
			}
			st.pop();
		//	cout << temp << endl;
			if( st.size() && st.top() == "-" ) {
				for(auto&j : temp) {
					if( j == '+' ) j = '-';
					else if( j == '-' ) j = '+';
				}
			}
			st.push(temp);
		}
	}
	while( st.size() ) {
		ans = st.top() + ans;
		st.pop();
	}
	cout << ans << endl;
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