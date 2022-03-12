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
		int dd[100] = {0};
		for(int i = 0 ; i < s.size() ; i++ ) dd[s[i]]++ ;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if( dd[s[i]] == 1 ) cout << s[i] ;
		}
		cout << endl; 
	}
}

