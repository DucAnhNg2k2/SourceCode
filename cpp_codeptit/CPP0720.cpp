#pragma GCC optimize("O2")
#include <bits/stdc++.h>
//	#include"DucAnh.h"
using namespace std;
#define endl '\n'
 
int main() 
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
	int n;
	cin >> n;
	long long a[n+5];
	for(int i = 1 ; i <= n ; i++ )
		cin >> a[i];
	long long L[n+5] = {0};
	L[1] = 1;
	for(int i = 2 ; i <= n ; i++ )
	{
		long long Max = 0;
		for(int j = 1 ; j < i ; j++ )
		{
			if( Max < L[j] && a[i] > a[j] )
				Max  = L[j];
		}
		L[i] = Max + 1;
	}
	long long R[n+5] = {0};
	R[n] = 1;
	for(int i = n-1 ; i >= 1 ; i-- )
	{
		long long Max = 0;
		for(int j = n ; j > i ; j-- )
		{
			if( Max < R[j] && a[i] > a[j] )
				Max = R[j];
		}
		R[i] = Max + 1;
	}
	long long res = -1e18;
	for(int i = 1 ; i <= n ; i++ )
	{
		res = max(res,L[i]+R[i]-1);
	}
	cout << res << endl;
	}

}