#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long n , k ;
	cin >> n >> k;
	long long temp = n ;
	for(int i = 2 ; i <= sqrt(n) ; i++ )
	{
		if( n%i == 0 )
		{
			temp = i;
			break;
		}
	}
	if( k > temp ) cout << "No";
	else cout << "Yes";
}
