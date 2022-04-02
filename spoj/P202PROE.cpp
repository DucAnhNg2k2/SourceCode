#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
void solve()
{
	string s;
	cin >> s;
	long long max = 0 , dem = 0 ;
	stack<char> st ;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( s[i] == '(' ) st.push(s[i]);
		else
		{
			if( st.empty() )
			{
				if( max < dem ) max = dem ;
				dem = 0 ;
			}
			else
			{
				st.pop();
				dem += 2 ;
				if( max < dem ) max = dem ;
			}
		}
	}
	cout << max << endl;	
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while ( t-- )
	{
		solve() ;
	}
}
 
