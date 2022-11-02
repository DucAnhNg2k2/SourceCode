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

int n;
string first,last;

void solve() { 
    cin >> n >> first >> last;
    queue<pair<string,int>> q;
    q.push({first,1});
    set<string> s;
    FOR(i,1,n) {
        string x;
        cin >> x;
        s.insert(x);
    }
   if(s.find(first) != s.end()) s.erase(first);
    while(q.size()) {
        string str = q.front().fi; int dem = q.front().se;
        q.pop();
        if( str == last ) {
            cout << dem << endl;
            return;
        }
        for(int i = 0; i < str.size(); i++ ) {
            string temp = str;
            for(int j = 'A'; j <= 'Z'; j++ ) {
                temp[i] = j;
                if(s.find(temp) != s.end()) {
                    s.erase(temp);
                    q.push(mp(temp,dem+1));
                } 
            }
        }
    }
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