#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<set>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   	string s;
   	cin >> s;
   	set<char> st;
	FOR(0,s.length()){
		st.insert(s[i]);
	}
	if( !(st.size()&1) ) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
} 
