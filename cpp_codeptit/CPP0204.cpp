#include<bits/stdc++.h>
using namespace std;

vector<bool> check(1e6+5,true);
void sangnt()
{
	check[0] = false ;
	check[1] = false ;
	for(int i = 2 ; i*i <= 1e6 ; i++ )
	{
		if( check[i] )
		{
			for(int j = i*i ; j <= 1e6 ; j += i ) 
				check[j] = false ;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sangnt();
	int f[100005] ;
	f[0] = 0;
	for(int i = 1 ; i < 1e5+5 ; i++ )
	{
		if( check[i] ) f[i] = f[i-1] + 1 ;
		else f[i] = f[i-1] ; 
	}
	int t;
	cin >> t;
	while( t-- )
	{
		int a,b;
		cin >> a >> b;
		cout << f[b] - f[a-1] << endl;
	}
}


