#include<bits/stdc++.h>
using namespace std;
 

void solve()
{
	int n , m;
	cin >> n >> m ;
	long long a[n+5][m+5] ;
	for( int i = 1 ; i <= n ; i++ )
		for(int j = 1 ; j <= m ; j++ )
			cin >> a[i][j] ;
			
	int hang_tren = 1 , hang_duoi = n , cot_trai = 1 , cot_phai = m , dem = 1 ;
	while( dem <= n*m )
	{
		for(int i = cot_trai ; i <= cot_phai ; i++ )
		{
			cout << a[hang_tren][i] << ' ';
			dem++;	
		}
		hang_tren++;
		if( dem > n*m ) break;
		for(int i = hang_tren ; i <= hang_duoi ; i++ )
		{
			cout << a[i][cot_phai] << ' ';
			dem++;
		
		}
		if( dem > n*m ) break;
		cot_phai--;
		for(int i = cot_phai ; i >= cot_trai ; i-- )
		{
			cout << a[hang_duoi][i] << ' ' ;
			dem++;
		}
		if( dem > n*m ) break;
		hang_duoi--;
		for(int i = hang_duoi ; i >= hang_tren ; i-- )
		{
			cout << a[i][cot_trai] << ' ' ;
			dem++;
		}
		if( dem > n*m ) break;
		cot_trai++;
	}
	cout << '\n' ;
}
int main()
{   
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}
