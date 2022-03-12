#include<bits/stdc++.h>
using namespace std;
vector<int> prime ;

void sangnt()
{
	vector<bool> check(1e6+5,true);
	for(int i = 2 ; i*i <= 1e6 ; i++ )
	{
		if( check[i] )
		{
			for(int j = i*i ; j <= 1e6 ; j += i ) 
				check[j] = false ;
		}
	}
	for(int i = 2 ; i <= 1e6 ; i++ )
		if( check[i] ) prime.push_back(i) ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sangnt();
	int a , b ;
	cin >> a >> b ;
	if( a > b ) swap(a,b) ;
	for(int i = 0 ; i < prime.size() ; i++ )
	{
		if( prime[i] >= b ) break ;
		if( prime[i] > a ) cout << prime[i] << ' ' ;
	}
}

