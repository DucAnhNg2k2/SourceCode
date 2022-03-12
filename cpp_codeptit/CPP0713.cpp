#include<bits/stdc++.h>
using namespace std;

vector<bool> check(30,false);
vector<int> x(30) ;
int n;
void Xuat()
{
	for(int i = 1 ; i <= n ; i++ )
	{
		cout << x[i] ;
	}
	cout << ' ' ;
}
void backtrack(int i)
{
	for(int j = 1 ; j <= n ; j++ )
	{
		if( !check[j] ) 
		{
			x[i] = j ;
			check[j] = true ;
			if( i == n ) Xuat() ;
			else backtrack(i+1) ;
			check[j] = false ;
		}
	}
}
void solve()
{
	cin >> n;
	backtrack(1) ;
	cout << '\n' ;
}
int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}      

