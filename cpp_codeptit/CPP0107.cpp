#include<bits/stdc++.h>
using namespace std;

char a[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}; 
char b[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
void solve()
{
	int made , dem = 0 ; char temp[15] ;
	cin >> made ;
	for(int i = 0 ; i < 15 ; i++ ) cin >> temp[i] ; 
	if( made == 101 )
	{
		for(int i = 0 ; i < 15 ; i++ )
			if( temp[i] == a[i] ) dem++;
	}
	if( made == 102 )
	{
		for(int i = 0 ; i < 15 ; i++ )
			if( temp[i] == b[i] ) dem++;
	}
	double s = dem*1.0*10/15;
	printf("%.2lf\n",s);
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long n;
	int t;
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}
