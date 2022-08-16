#include<bits/stdc++.h>
using namespace std;
 

void solve()
{
	
}
int main()
{   
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s , res = "";
	cin >> s;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if( s[i] >= 'A' && s[i] <= 'Z' ) s[i] += 32 ;
		if( s[i] != 'u' && s[i] != 'e' && s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'y' )
			res += s[i] ;
	}
	for(int i = 0 ; i < res.size() ; i++ )
	{
		cout << "." << res[i] ;
	}
}
