#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long a[1000005] , f[1000005] ;
int bin_search(int l,int r,long long x)
{
	while( l < r )
	{
		int m = (l+r)/2;
		if( f[m] < x ) l = m+1;
		else r = m ;
	}
	return l;
}
void solve()
{
    int n , k , check = false ;
    int  kcmin = 1e8 ; ; 
    cin >> n >> k ;
    for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
    f[1] = a[1] ;
    for(int i = 2 ; i <= n ; i++ ) f[i] = f[i-1] + a[i] ;
   	for(int i = 1 ; i <= n ; i++ )
   	{
   		if( f[i] > k )
		{
			if( kcmin > i ) kcmin = i ;

			int l =  bin_search(1,i-1,f[i]-k) - 1; 
			if( kcmin > i-l ) kcmin = i-l ;
			check = true ;
		} 
	}
	if( check ) cout << kcmin << endl;
	else cout << -1 << endl;
   	/*
	    1 4 45 6 0 19 
   	   1 5 50 56 56 75
	X = 51 
	arr : 1 5 49 54 54 73 
				54 	
   	*/
   	/*
   	1
	6 51
	1 4 45 6 0 19
   	*/
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
    {
        solve();
    }
}
