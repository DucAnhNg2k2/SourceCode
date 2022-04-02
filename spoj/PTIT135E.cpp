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
#define maxn 100005

string s;
set<string> arr;
int a[300] = {};
bool b[300] = {};

void Try(string ans,int i) {
	if( i == s.size()) {
		arr.insert(ans);
		return;
	}
	if( s[i] == '(') {
		b[a[i]] = true;
		Try(ans+s[i],i+1);
		b[a[i]] = false;
		Try(ans,i+1);
		return;
	}
	if( s[i] == ')') {
		if(b[i]==true) Try(ans+s[i],i+1);
		else Try(ans,i+1);
		return;
	}
	Try(ans+s[i],i+1);
}

void solve() {
	cin >> s;
	stack<int> st;
	FO(i,0,s.size()) {
		if( s[i] == '(') st.push(i);
		if( s[i] == ')') {
			a[st.top()] = i;
			st.pop();
		}
	}
	Try("",0);
	arr.erase(s);
	for(auto i:arr) cout << i << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
