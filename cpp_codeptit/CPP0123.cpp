#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long n;
	cin >> n;
	if( n < 2 )
	{
		cout << "NO" ;
		return 0;
	}
	for(int i = 2 ; i <= sqrt(n) ; i++ )
	{
		if( n%i == 0 )
		{
			cout <<"NO";
			return 0;
		}
	}
	cout << "YES";
}
