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

string s,ans = "WRONG PROBLEM!";
bool check;
void Check(string s) {
	int s1 = int(s[0]-'0')*10 + int(s[1]-'0');
	int s2 = int(s[5]-'0')*10 + int(s[6]-'0');
	int s3 = int(s[10]-'0')*10 + int(s[11]-'0');
	if( s[3] == '+' && s1 + s2 == s3 ) 
	{
		ans = min(ans,s);
	}
	if( s[3] == '-' && s1 - s2 == s3 ) 
	{
		ans = min(ans,s);
	}
	if( s[3] == '*' && s1 * s2 == s3 ) 
	{
		ans  = min(ans,s);
	}
	if( s[3] == '/' && s2 != 0 && s1%s2 == 0 && s1/s2 == s3 ) 
	{
		ans = min(ans,s);
	}
}

void Try(int i,string res) {
	if( i == s.size() ) {
		Check(res);
		return;
	}
	if( s[i] == '?') {
		if( i == 3 ) {
			Try(i+1,res+'+');
			Try(i+1,res+'-');
			Try(i+1,res+'*');
			Try(i+1,res+'/');
		}
		else {
			if( i == 0 || i == 5 || i == 10 ) {
				FOR(j,1,9) {
					Try(i+1,res+char(j+'0'));
				}
			}
			else {
				FOR(j,0,9) {
					Try(i+1,res+char(j+'0'));
				}
			}
		}
	}
	else {
		Try(i+1,res+s[i]);
	}
}
void solve() {
	getline(cin,s);
	ans = "WRONG PROBLEM!";
	Try(0,"");
	cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	cin.ignore();
	while( T-- )
    	solve();
    return 0;
}
