#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vector<long long> a(n);
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	long long dem = 0 ;
	sort(a.begin(),a.end());
	for(vector<long long>::iterator i = a.begin() ; i != a.end() ; i++ )
	{
		vector<long long>::iterator j = lower_bound(a.begin(),a.end(),*i+k);
		j--;
		long long kc = (j-i);
		dem += kc ;
	}
	cout << dem << endl;
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
