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
const LL MOD = 998244353;
#define maxn 100005

string XuLy(string s) {
    stack<string> st;
    string res = "";
    for(auto i:s) {
        if( i == '(' ) st.push(string(1,i));
        else if( i == ')' ) {
            string temp = "";
            while( st.size() && st.top() != "(") {
                temp = st.top() + temp;
                st.pop();
            }
            st.pop();
            if( st.size() && st.top() == "-" ) {
                for(auto& j:temp) {
                    if( j == '-' ) j = '+';
                    else if ( j =='+') j = '-';
                }
            }
            st.push(temp);
        }
        else st.push(string(1,i));
    }
    while( st.size()) {
        res = st.top() + res;
        st.pop();
    }
    return res;
}

void solve() {
    string s1,s2;
    cin >> s1 >> s2;
    if(XuLy(s1)==XuLy(s2)) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main() {
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
