#include<bits/stdc++.h>
using namespace std;
long long n , s , Min = 1e18 , a[1000] , sum = 0 , dem = 0 ;
long long t[1000] ;
void Try(int i)
{
    if( i > n ) return ;
    for(int j = 0 ; j <= 1 ; j++ )
    {
        a[i] = j;
        if( a[i] )
        {
            dem++;
            sum += t[i];
        }
        if( dem < Min )
        {
            if( sum == s ) Min = dem ;
            else
            {
                if( sum < s ) Try(i+1);
            }
        }
        if( a[i] )
        {
            dem--;
            sum -= t[i] ;
        }
    }
}
void solve()
{   
    Min = 1e18 , sum = 0 , dem = 0 ;
    cin >> n >> s;
    for(int i = 1 ; i <= n ; i++ ) cin >> t[i] ;
    Try(1);
    if( Min == 1e18 )
    {	
        cout << "-1" << endl;
        return ;
    }
    cout << Min << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    // int t;
    // cin >> t;
    // while( t-- )
    // {
        solve();
    //}
}
