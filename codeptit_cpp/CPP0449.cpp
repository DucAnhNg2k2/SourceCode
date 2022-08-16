#include<bits/stdc++.h>
using namespace std;
#define oo 10000005
bool dd[oo] ;
int a[oo] ;
void solve()
{
	int n , x , check = -1 ;
	cin >> n >> x;
	for(int i = 0 ; i < 1000000 ; i++ ) dd[i] = 0;
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
		dd[a[i]] = 1;
	}
	for(int i = 0 ; i < n ; i++ )
	{
		if( dd[x+a[i]] ) 
		{
			check = 1 ;
			break;
		}
		dd[a[i]] = 1 ;
	}
	cout << check << endl;
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
