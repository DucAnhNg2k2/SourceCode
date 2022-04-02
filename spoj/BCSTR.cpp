#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
typedef priority_queue<ll> Queue;
typedef vector<ll> vl ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
const ll mod = 1e9+7;
void solve(){
}
int main()
{
	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	string s1, s2;
	cin >> s1 >> s2 ;
	s1 = '@' + s1;
	s2 = '@' + s2;
	ll s[sz(s1)][sz(s2)] ;
	FORR(i,0,sz(s1)){
		FORR(j,0,sz(s2)){
			s[i][j] = 0 ;
		}
	} 
	FORR(i,1,sz(s1)){
		FORR(j,1,sz(s2)){
			if( s1[i] == s2[j] ) s[i][j] = s[i-1][j-1] + 1;
			else s[i][j] = max(s[i][j-1],s[i-1][j]);
		}
	}
	cout << s[sz(s1)-1][sz(s2)-1] ;
}   
