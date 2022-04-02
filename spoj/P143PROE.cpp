#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
struct KyTu{
	char c ;
	int index ;
};
bool cmp(KyTu a, KyTu b){
	if( a.c > b.c ) return true;
	if( a.c == b.c ){
		if( a.index < b.index ) return true;
	}
	return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
	string s;
	cin >> s;
	int n = s.length();
	KyTu p[n];
	FOR(0,n){
		p[i].c = s[i];
		p[i].index = i+1;
	}
	sort(p,p+n,cmp);
	string res = "";
	int cs = 0 ;
	FOR(0,n){
		if( cs < p[i].index ){
			res += p[i].c ;
			cs = p[i].index ;
		}
	}
	cout << res;
}      
