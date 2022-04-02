#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
bool cmp(string a,string b){
	return a < b;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n , k ;
	cin >> n >> k ;
	vector<string> v;
	FOR(0,n){
		string s;
		cin >> s;
		v.push_back(s);
	} 
	sort(v.begin(),v.end(),cmp);
	int start = 1 ;
	while( true ){
		if( k <= start ) break;
		else k-= start;
		start++;
	}
	cout << v[k-1] ; 
} 
