#include<bits/stdc++.h>
using namespace std;
int c[20][20] , s = 0 , n , cmin , a[20] ; 
long long Min = 1e18 ;
vector<bool> chuaxet(20,true);
void Try(int i)
{
    for(int j = 1 ; j <= n ; ++j )
    {
        if( chuaxet[j] )
        {
            a[i] = j;
            chuaxet[j] = false;
            s += c[a[i-1]][j] ;
            if( i == n )
            {
                if( s + c[j][1] < Min ) Min = s + c[j][1] ;
            }
            else
            {
                if( s + (n-i+1)*cmin < Min ) Try(i+1);
            }
            s -= c[a[i-1]][j] ;
            chuaxet[j] = true ;
        }
    }
}
int main()
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> n;
    for(int i = 1 ; i <= n ; i++ )
    for(int j = 1 ; j <= n ; j++ )
    {
        cin >> c[i][j] ;
        if( cmin > c[i][j] && i != j ) cmin = c[i][j] ;  
    }
    chuaxet[1] = false;
    a[1] = 1 ;
    Try(2);
    cout << Min ;
} 
