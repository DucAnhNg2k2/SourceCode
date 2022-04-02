#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
 
int main()
{
    ios_base::sync_with_stdio(0);
//   	cin.tie(0);
  	string s;
	cin >> s;
	set<string> st;
	for(int i = 97 ; i <= 122 ; i++ ){
		for(int j = 0 ; j <= s.size() ; j++ ){
			string tmp = s;
			string c = "";
			c += (char)(i);
			tmp.insert(j,c);
			st.insert(tmp);
		}
	}
	cout << st.size();
}      
