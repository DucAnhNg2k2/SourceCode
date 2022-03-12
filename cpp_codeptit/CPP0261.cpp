#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n , m;
	cin >> n ;
	long long a[n][n] ;
	for(int i = 0 ; i < n ; i++ )
		for(int j = 0 ; j < n ; j++ )
			cin >> a[i][j] ;
	cin >> m ;
	long long b[m][m] ;
	for(int i = 0 ; i < m ; i++ )
		for(int j = 0 ; j < m ; j++ )
			cin >> b[i][j];
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = 0 ; j < n ; j++ )
			{
				a[i][j] *= b[i%m][j%m] ;
				cout << a[i][j] << ' ' ;
			}
		cout << endl;
	}
}
