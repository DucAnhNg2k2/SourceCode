#include<bits/stdc++.h>
using namespace std ;
 
string delete1(string s)
{
	string res = "" ;
	stack<char> st;
	stack<int> index ;
	vector<bool> kiemtra(300,1);
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( s[i] != ')' )
		{
			st.push(s[i]);
			index.push(i);
		}
		else
		{
			bool check = false ;
			while( st.top() != '(' )
			{
				if( st.top() == '+' || st.top() == '-' ) check = true ;
				st.pop();
				index.pop();		
			}
			if( check == false ) 
			{
				kiemtra[ index.top() ] = false ;
				kiemtra[i] = false ;
			}
			st.pop() ;
			index.pop() ;
		}
	}
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( kiemtra[i] ) res += s[i] ;
	}
	return res ;
}
string delete2(string s)
{
	string res = "" ;
	stack<char> st ;
	stack<int> index ;
	vector<bool> kiemtra(300,1);
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( s[i] == ')' )
		{
			while( st.top() != '(' )
			{
				st.pop();
				index.pop();
			}
			st.pop() ;
			if( st.empty() || ( !st.empty() && st.top() != '-' ) )
			{
				kiemtra[index.top() ] = false ;
				kiemtra[i] = false ;
			}
			index.pop() ;
		}
		else
		{
			st.push(s[i]);
			index.push(i);
		}
	}
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( kiemtra[i]  ) res += s[i] ;
	}
	return res; 
}
void solve()
{
	string s ;
	getline(cin,s) ;
	string ss ; 
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( s[i] != ' ' ) ss.push_back(s[i]) ;	
	}
	s = delete1(ss) ;
	cout << delete2(s) << '\n' ;
}
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	cin.ignore() ;
	while( t-- )
	{
		solve() ;
	}
}
