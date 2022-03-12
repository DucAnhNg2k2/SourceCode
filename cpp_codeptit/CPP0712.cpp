#include<bits/stdc++.h>
using namespace std;

int n,k,a[30],stop = 0 ;
void KhoiTao()
{
	for(int i = 1 ; i <= k ; i++ )
	{
		a[i] = i ;
	}
}
void Xuat()
{
	for(int i = 1 ; i <= k ; i++ ) cout << a[i] ;
	cout << ' ' ;
}
void Sinh()
{
	int i = k ;
	while( a[i] == n-k+i && i > 0 ) i--;
	if( i == 0 ) stop = 1 ;
	else a[i]++;
	int p = a[i]+1 , pos = i+1 ;
	while( pos <= k )
	{
		a[pos] = p ;
		pos++;
		p++;
	}
}
void ChuongTrinh()
{
	while( !stop ) 
	{
		Xuat() ;
		Sinh() ;
	}
}
void solve()
{
	stop = 0 ;
	cin >> n >> k ;
	KhoiTao();
	ChuongTrinh();
	cout << '\n' ;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 	int t;
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}      

