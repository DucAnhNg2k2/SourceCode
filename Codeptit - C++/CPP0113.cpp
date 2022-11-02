#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t;
	while( t-- )
	{
		string s; 
		cin >> s;
		if( s.size() <= 1 ) cout << 0 ;
		else 
		{
			int check = (int)(s[s.size()-2]-'0')*10 + (int)(s[s.size()-1]-'0') ;
			if( check == 86 ) cout << 1 ;
			else cout << 0 ;
		}
		cout << endl ;
	}
}

