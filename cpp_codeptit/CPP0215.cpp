#include<bits/stdc++.h>
using namespace std;

int a[10005] , b[10005] ;
void solve()
{
	int n,m ;
	cin >> n >> m ;
	long long sumA = 0 , sumB = 0;
	for(int i = 0 ; i < n ; i++ )
	{
		 cin >> a[i] ;
		 sumA += a[i] ;
	}
	for(int i = 0 ; i < m ; i++ ) 
	{
		cin >> b[i] ;
		sumB += b[i] ;
	}
	long long sum1 = 0 , sum2 = 0 , MAX = max(sumA,sumB);
	long long sumAtest = 0 , sumBtest = 0 ;
	for(int i = 0 ; i < min(n,m) ; i++ )
	{
		sumAtest += a[i] ;
		sumBtest += b[i] ;
		MAX = max(sumAtest+(sumB-sumBtest),max(sumBtest+(sumA-sumAtest),MAX));
	}
	cout << MAX << endl ;
}
int main()
{
    int t;
    cin >> t;
    while( t-- )
	{
        solve();
    }
} 
