#include<iostream>
using namespace std ;
int a[1000] , n;
int main()
{
	cin >> n;
	for(int i = 1 ; i<= n ; i++ ) cin >> a[i];
	if( a[1]%2 == 0 || a[n]%2 == 0 || n == 2 )
	{
		cout <<"no";
		return 0;
	}
	if( n%2 == 1 )
	{
		cout << "yes";
		return 0;
	}
	cout << "no" ;
} 
