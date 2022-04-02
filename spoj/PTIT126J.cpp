#include<bits/stdc++.h>
using namespace std;
long long a[1000005],f[1000005];
int BinSearch(int l,int r,long long x)
{
	while( l < r )
	{
		int m = (l+r)/2;
		if( a[m] == x ) r = m;
		else if( a[m] > x ) r = m;
		else 
		{
			l = m + 1;
		}
	}
	return l;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long n , m , l = 1 , r = 2000000 , mid , max = 0 ;
    cin >> n >> m ;
    for(int i = 1 ; i <= n ; ++i ) cin >> a[i];
	sort(a+1,a+1+n);
    f[0] = 0 ;
    f[1] = a[1] ;
    for(int i = 1 ; i <= n ; ++i ) f[i] = f[i-1] + a[i] ;
    while( l < r )
    {
        mid = (l+r)/2;
        int i = BinSearch(1,n,mid);
        long long sumM = mid*(n-i+1);
		long long sum = f[n] - f[i-1] ;
		long long chenhlech = sum - sumM ;
		if( chenhlech >= m )
		{
			l = mid+1;
			if( max < mid ) max = mid ;
		}
		else r = mid ;
    }
	cout << max ;
}  
