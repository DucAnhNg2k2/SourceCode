#include<bits/stdc++.h>
using namespace std;
long long n , k , a[100] , sum = 0 , ts = 0 ;
void Try(int i,long long s,long long dem)
{
    if( i > n ) return ;
    if( dem == k-1 )
    {
        ts++;
        return ;
    }
    if( s + a[i] == sum)
    {
        Try(i+1,0,dem+1);
        Try(i+1,s+a[i],dem);
    }
    else
    {
        Try(i+1,s+a[i],dem);
    }
}
int main()
{	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++ )
    {
        cin >> a[i] ;
        sum += a[i] ;
    }
    if( sum%k != 0 )
    {
        cout << 0 ;
    }
    else
    {
        sum = sum/k;
    }
    Try(1,0,0);
    cout << ts ;
}
 
