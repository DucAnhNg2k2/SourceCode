#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s , res = "" ;
	cin >> s;
	stack<char> st ;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( s[i] == '<' ) 
		{
			if( res.size() > 0 )
			{
				st.push(res[res.size()-1]);
				res.erase(res.size()-1,1);
			}
		}
		else if ( s[i] == '>' ) 
		{
			if( !st.empty() ) 
			{
				res += st.top() ;
				st.pop() ;
			}
		}
		else if ( s[i] == '-' ) 
		{
			if(	res.size() > 0 )
			res.erase(res.size()-1,1);
		}
		else res += s[i] ;
	}  	
	while( !st.empty() ) 
	{
		res += st.top() ;
		st.pop() ;
	}
	cout << res ;
}