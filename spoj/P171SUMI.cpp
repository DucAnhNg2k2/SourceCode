#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
void solve1(string s){
	int dd[300] = {0};
	for(int i = 0 ; i < s.size() ; i++ ){
		dd[s[i]]++;
	}
	int dem = 0 ;
	for(int i = 0 ; i < 300 ; i++ ){
		if( dd[i]%2 == 1 ) dem++;
	}
	if( dem > 3 ){
		cout <<"NO\n";
		return ;
	}
	else{
		cout <<"YES\n";
		return ;
	}
}
void solve2(string s){
	int dd[300] = {0};
	for(int i = 0 ; i < s.size() ; i++ ){
		dd[s[i]]++;
	}
	int dem = 0 ;
	for(int i = 0 ; i < 300 ; i++ ){
		if( dd[i]%2 == 1 )dem++;
	}
	if( dem > 2 ){
		cout << "NO\n";
	}
	else cout <<"YES\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
//   	cin.tie(0);
	int t;
	cin >> t;
	while( t-- ){
		string s;
		cin >> s;
		if( s.size()%2 == 1 ){
			solve1(s);
		}
		else{
			solve2(s);
		}
	}
}       
