#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long n;
	cin >> n;
	for(int i = 2 ; i <= sqrt(n) ; i++ )
	{
		if( n%i == 0 )
		{
			int dem = 0 ;
			while( n%i == 0 )
			{
				n/=i;
				dem++;
			}
			cout << i << ' ' << dem << endl;
		}
	}
	if( n > 1 ) cout << n << " 1" ;
}
