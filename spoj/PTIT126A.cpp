#include<bits/stdc++.h>
using namespace std;
int n,m;

void solve()
{
	double a[n+5][m+5];
	vector<double> s(m+5,1);
	for(int i = 1 ; i <= n ; i++ )
		for(int j = 1 ; j <= m ; j++ )
			cin >> a[i][j];
	double ss = 1;
	for(int i = 1 ; i <= n ; i++ )
	{
		double Max = 0;
		for(int j = 1 ; j <= m ; j++ )
		{
			if( abs(a[i][j]) > Max ) Max = abs(a[i][j]);
			if( ss != 0 )
			s[j] = s[j]*a[i][j]/ss;
		}
		ss = Max ;
	}
	double pos = 1;
	for(int i = 1 ; i <= m ; i++ )
	{
		if( s[i] >= s[pos] ) pos = i;
	}
	cout << pos << endl;
}

int main() 
{

	while( true )
	{
		cin >> m >> n;
		if( m == 0 && n == 0 ) break;
		solve();
	}
}
