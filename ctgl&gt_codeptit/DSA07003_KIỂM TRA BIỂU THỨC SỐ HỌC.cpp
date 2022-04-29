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

char a[] = {'(','+','-','*','/'};
void solve() {
	string s;
    getline(cin,s);
    stack<char> st;
    for(auto i:s) {
        FOR(j,0,4) {
            if(i == a[j]) {
                st.push(i);
                break;
            }
        }
        if( i == ')') {
            if(st.top() == '(') {
                cout << "Yes" << endl;
                return;
            }
            while(st.size() && st.top() != '(') st.pop();
            st.pop();
        }
    }
    cout << "No" << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
    cin.ignore();
	while( T-- )
    	solve();
    return 0;
}
