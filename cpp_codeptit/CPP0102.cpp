#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		char c;
		cin >> c;
		if( c >= 'a' && c <='z') c-= 32 ;
		else c+=32;
		cout << c << '\n' ; 
	}
}
