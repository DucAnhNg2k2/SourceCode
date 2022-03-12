#include<bits/stdc++.h>
using namespace std;
 
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
			while( !st.empty() && HauTo(to_string(s[i])) <= HauTo(st.top() ) ) {
				v.push_back(st.top());
				st.pop();
			} 
			st.push(to_string(s[i]));
		}
	}
	while( !st.empty() ) {
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
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
} 
