#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
ll Mod(string s){
	ll sum = 0 ;
	FOR(0,s.length()){
		sum = sum*10 + (int)(s[i]-'0');
		sum %= 36;
	}
	return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   	int t;
   	cin >> t;
   	while( t-- ){
   		string s;
   		cin >> s;
   		if( Mod(s)  == 0 ) cout << "YES\n"; 
   		else cout << "NO\n";
	   }
}  
