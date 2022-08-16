#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
    {
    	bool dd[500] = {false} ;
    	string s ; int k , dem = 0 ;
    	cin >> s ;
    	cin >> k ;
    	for(int i = 0 ; i < s.size() ; i++ ) dd[s[i]] = true ;
    	for(int i = 'a' ; i <= 'z' ; i++ )
    	{
    		if( dd[i] == false ) dem++;
		}
		if( dem <= k ) cout << 1 << '\n' ;
		else cout << 0 << '\n' ;
	}
}

