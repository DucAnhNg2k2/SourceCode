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

typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

long long to_ll(string s) {
	long long res = 0;
	for(int i = 0 ; i < s.size() ; i++ ) {
		res = res*10 + (int)(s[i]-'0');
	}	
	return res;
}

int HauTo(string s)
{
	if( s == "(" || s == ")" ) return 0;
	if( s == "+" || s == "-" ) return 1 ;
	if( s == "*" || s == "/" ) return 2;
}

string to_string(char s) {
	string res = "";
	res += s;
	return res;
}

void solve() {
	string s ;
	vector<string> v;
	cin >> s;
	stack<string> st;
	for(int i = 0 ; i < s.size() ; i++ ) {
		if( s[i] >= '0' && s[i] <= '9' ) {
			string ss = "";
			while( s[i] >= '0' && s[i] <= '9' ) {
				ss += s[i];
				i++;
			}
			i--;
			v.push_back(ss);
		}
		else if( s[i] == '(' ) {
			st.push(to_string(s[i]));
		}
		else if( s[i] == ')' ) {
			while ( st.top() != "(" ) {
				v.push_back(st.top());
				st.pop();
			}
			st.pop();
		}
		else {
			while( !st.empty() && HauTo(to_string(s[i])) <= HauTo(st.top()) ) {
				v.push_back(st.top());
				st.pop();
			} 
			st.push(to_string(s[i]));
		}
	}
	while(!st.empty()) {
		v.push_back(st.top());
		st.pop();
	}
	stack<long long> ss;
	for(int i = 0 ; i < v.size() ; i++ ) {
		if( v[i][0] >= '0' && v[i][0] <= '9' ) {
			ss.push(to_ll(v[i]));
		}
		else {
			long long s1 = ss.top(); ss.pop();
			long long s2 = ss.top(); ss.pop();
			if( v[i] == "+" ) s2 += s1;
			else if( v[i] == "-" ) s2 -= s1;
			else if( v[i] == "*" ) s2 *= s1;
			else s2 /= s1;
			ss.push(s2);
		}
	}
	cout << ss.top() << endl;
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