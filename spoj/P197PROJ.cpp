#include<bits/stdc++.h>
using namespace std;
long long c[1000005] ;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long n , k , d ;
	cin >> n >> k ;
	map<long long,long long> m1 , m2 ;
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> d ; m1[d]++;
	}
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> d ; m2[d]++;
	}
	long long dem = 0 ;
	for(map<long long,long long>::iterator i = m1.begin() ; i != m1.end() ; i++ )
	{
		map<long long,long long>::iterator j = m2.find((*i).first);
		if( j == m2.end() ) 
		{
			c[dem] = (*i).first ;
			dem += (*i).second ;
		}
		else
		{
			c[dem] = (*i).first ;
			dem += abs( (*i).second - (*j).second ) ;
		}
	}	
	for(map<long long,long long>::iterator i = m2.begin() ; i != m2.end() ; i++ )
	{
		map<long long,long long>::iterator j = m1.find((*i).first);
		if( j == m1.end() ) 
		{
			c[dem] = (*i).first ;
			dem += (*i).second ;
		}
	}	
	if( dem > 2 ) cout << "NO" ;
	else
	{
	//	cout << c[0] << ' ' << c[1] << endl;
		if( dem == 0 ) cout << "YES" ;
		else
		{
			long long t =  abs(c[0]-c[1]) ; 
			if( -k <= t && t <= k ) cout << "YES";
			else cout <<"NO";
		}	
	} 
} 
/*
	5 4
	0 0 2 2 3
	1 1 2 2 3
*/ 
