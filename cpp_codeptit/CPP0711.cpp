#include<bits/stdc++.h>
using namespace std;

int a[100] , n ;
void Xuat()
{
	for(int i = 1 ; i <= n ; i++ )
		cout << a[i] ;
	cout << ' ' ;
}
void Try(int i)
{
	for(int j = 0 ; j <= 1 ; j++ )
	{
		a[i] = j ;
		if( i == n ) Xuat() ;
		else Try(i+1) ;
	}
}

void solve()
{
	cin >> n ;
	Try(1) ;
	cout << '\n' ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; 
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}

