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
    	string s ;
    	cin >> s;
    	long long temp = 0 ;
    	for(int i = 0 ; i < s.size() ; i++ )
    	{
    		temp = temp*10 + (int)(s[i]-'0');
    		temp %= 11 ;
		}
		if( temp == 0 ) cout << 1 << '\n' ;
		else cout << 0 << '\n' ;
	}
}

