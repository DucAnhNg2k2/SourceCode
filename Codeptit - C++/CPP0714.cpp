#include<bits/stdc++.h>
using namespace std;
int a[100] , n ;

void SinhHoanVi()
{
	int i = n-1 ;
	while( i >= 1 && a[i] < a[i+1] ) i--;
	if( i == 0 )
	{
		cout << n << ' ' ;
		while(n--)
		{
			cout << n << ' ' ;
		}
		return ;
	}
	int k = n ;
	while( a[k] > a[i] ) k--;
	swap(a[i],a[k]);
	i++ , k = n ;
	while( i <= k )
	{
		swap(a[i],a[k]);
		i++;
		k--;
	}
	for(int i = 1 ; i <= n ; i++ )
	{
		cout << a[i] << ' ' ;
	}
}

void solve()
{
	cin >> n;
	for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
	SinhHoanVi();
	cout << '\n' ;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
        solve();
    }
}
