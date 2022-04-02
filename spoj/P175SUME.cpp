#include<bits/stdc++.h>
using namespace std;
 
long long sizecs[1005] , demcs[1005] , n ;
long long cs[1005] ;
int main() 
{
	sizecs[1] = 5 ;
	cs[1] = 1 ;
	for(long long i = 2 ; i < 1000 ; i++ )
	{
		sizecs[i] = sizecs[i-1]*2 ;
		cs[i] = cs[i-1]*2 ;
	}
	demcs[0] = 0 ;
	for(long long i = 1 ; i < 50 ; i++ )
	{
		demcs[i] = demcs[i-1] + sizecs[i] ;
	}
	cin >> n ;
	long long find ;
	for(long long i = 1 ; i < 1000 ; i++ )
	{
		if( n <= demcs[i] ) 
		{
			find = i ;
			break ;
		}
	}
	n -= demcs[find-1];
//	cout << n ;
	for(long long i = 1 ; i <= 5 ; i++ )
	{
		if( n <= i*cs[find] )
		{
			cout << i ;
			break ;
		}
	}
} 
