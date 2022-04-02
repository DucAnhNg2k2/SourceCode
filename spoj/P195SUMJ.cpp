#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long n , k ;
	cin >> n >> k ;
	vector<long long> a(n) ;
	for(auto&i:a) cin >> i;
	sort(a.begin(),a.end());
	int pos = n/2 ;
	for(int i = n/2 + 1 ; i < n ; i++ )
	{
		long long sum = (i-pos)*(a[i]-a[pos]);
		if( k <= sum )
		{
			a[pos] += k/(i-pos);
			k = 0 ;
		}
		else
		{
			k -= sum ;
			a[pos] = a[i] ; 
		}
	}
	a[pos] += k/(n-pos);
	cout << a[pos] ;
}
 
