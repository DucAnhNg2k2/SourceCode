#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll ;
typedef vector<long long> vll ;
 
int main()
{
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
    int t = 1;
    cin >> t;
    while( t-- ) {
        int n , k ;
        cin >> n >> k ;
        vll a(n+5) ;
        vector<vector<long long>> f(n+5,vector<long long>(k,0));
        for(int i = 1 ; i <= n ; i++ ) {
            cin >> a[i] ;
            a[i] %= k ;
        }
        for(int i = 1 ; i <= k-1 ; i++) f[1][i] = -1e18;
        f[1][a[1]] = 1;
        for(int i = 2 ; i <= n ; i++ ) {
            for(int j = 0 ; j < k ; j++ ) {
                f[i][j] = max(f[i-1][j],f[i-1][(j-a[i]+k)%k]+1);
            }
        }
        cout << f[n][0] << endl;
    }
} 