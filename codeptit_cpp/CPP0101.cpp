#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		long long n;
		cin >> n;
		n = n*(n+1)/2;
		cout << n << endl;  
	}
}
