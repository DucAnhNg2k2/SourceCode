#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
bool LonHon(string a,string b){
	while( a.size() < b.size() ) a = '0' + a;
	while( a.size() > b.size() ) b = '0' + b;
	if( a >= b ) return true;
	else return false;
}
bool NhoHon(string a,string b){
	while( a.size() < b.size() ) a = '0' + a;
	while( a.size() > b.size() ) b = '0' + b;
	if( a <= b ) return true;
	else return false;
}
int cs = 1;
void solve(int n){
	vector<string> v;
	v.resize(n);
	set<string> s;
	FOR(0,n){
		string x;
		cin >> x;
		while(x[0] == '0') x.erase(0,1);
		v[i] = x;
		s.insert(x);
	}
	string min = "10000000000000000000000000000000000000000000000000000000000000000000000000";
	string max = "0";
	FOR(0,n){
		if( LonHon(min,v[i])) min = v[i];
		if( NhoHon(max,v[i])) max = v[i];	
	}
	if( s.size() == 1 ){
		cout << "Case " << cs << ": " << "There is a row of trees having equal height." << endl;
		cs++;
	}
	else{
		cout << "Case " << cs << ": " << min << ' ' << max << endl;
		cs++;
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);
	while( true ){
		int n;
		cin >> n;
		if( n== 0) return 0;
		solve(n);
	}
}  
