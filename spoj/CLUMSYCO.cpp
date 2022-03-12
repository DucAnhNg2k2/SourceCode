// FORM 
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
		stack<char> st;
		int dem = 0 ;
		FOR(0,s.size()){
			if( s[i] =='(') st.push(s[i]);
			if( s[i] ==')'){
				if( st.empty() ){
					dem++;
					st.push('(');
				}
				else{
					st.pop();
				}
			}
		}
		if (!st.empty() ){
			dem += st.size()/2;
		}
		cout << dem ;
}     
 
