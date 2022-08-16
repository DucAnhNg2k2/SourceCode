#include<bits/stdc++.h>
using namespace std;

bool IsPrime(long long n)
{
	if( n < 2 ) return false; 
	for(int i = 2 ; i <= sqrt(n) ; i++ )
		if( n%i == 0 )
			return false;
	return true ;
}
long long sum(long long n)
{
	long long s = 0 ;
	while( n > 0 )
	{
		s += n%10 ;
		n/=10;
	}
	return s;
}
void solve()
{
	long long n , temp ;
	cin >> n;
	temp = n;
	long long summ = 0 ;
	for(int i = 2 ; i <= sqrt(n) ; i++ )
	{
		while( n%i == 0 )
		{
			n/=i;
			summ += sum(i) ;
		}
	}
	if( n > 1 ) summ += sum(n) ;
	if( IsPrime(temp) ) cout << "NO" ;
	else
	{
		if( sum(temp) == summ ) cout << "YES" ;
		else cout << "NO" ;
	}
	cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while( t-- )
	{
        solve();
    }
} 
