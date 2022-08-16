#include<iostream>
using namespace std;
long long max_day(long long *a,int l, int r,int &postmp)
{
    long long max = a[l] ; postmp = l ;
    for(int i = l; i <= r ; i++)
	{
        if( max <= a[i] )
        {
        	max = a[i] ;
        	postmp = i ;
		}
    }
    return max;
}
void solve()
{
    long long n;
    int k,postmp;
    cin >> n >> k;
    long long a[n];
    for(int i = 1 ; i <= n ; i++ ) cin >> a[i];
    long long tmp = max_day(a,1,k,postmp) ;
    cout << tmp << ' ' ;
    /*
    1
    9 3
	1 2 3 1 4 5 2 3 6
    */
    int i ;
    for(i = 2 ; i+k-1 <= n ; i++ )
	{
        if( a[i+k-1] >= tmp )
		{
            postmp = i+k-1 ;
            tmp = a[postmp] ;
            cout << tmp << ' ';
        }
        else
        {
        	if( postmp < i )
        	{
        		tmp = max_day(a,i,i+k-1,postmp);
        		cout << tmp << ' ' ;
			}
			else cout << tmp << ' ' ;
		}
    }
    cout << endl;
}
int main()
{
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
        solve();
    }
}
