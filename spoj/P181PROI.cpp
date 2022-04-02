#include<iostream>
using namespace std ;
char s[1000] ;
int main()
{
	int n , dem = 0 ;
	cin >> n;
	for(int i = 0 ; i < n ; i++ ) s[i] = ' ';
	for(int i = 0 ; i < n ; i++ ) cin >> s[i] ;
	for(int i = 0 ; i < n ; i++ )
	{
		if( s[i] == '0' && s[i+1] =='1' && s[i+2] =='0' )
		{
			s[i+2] = '1';
			dem++;
		}
	}
	cout << dem ;
} 
