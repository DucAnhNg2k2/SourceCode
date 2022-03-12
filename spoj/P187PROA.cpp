#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,m,k;
    cin >> n >> m >> k;
    vector<bool> check(n+5,false);
    vector<int> a(m+5);
    for(int i = 1 ; i <= m ; i++ )
    {
        cin >> a[i];
        for(int j = max(1,a[i]-k); j <= min(n,a[i]+k) ; j++ )
            check[j] = true;
    }
    vector<pair<int,int>> v;
    for(int i = 1 ; i <= n ; i++ )
    {
        if( !check[i] ) 
        {
            check[i] = true;
            int pos = i;
            i++;
            while( check[i] == false && i <= n )
            {
                check[i] = true;
                i++;
            }
            i--;
            v.push_back(make_pair(pos,i--));
        }
    }
    int cnt = 0 ;
    for(int i = 0 ; i < v.size() ; i++ )
    {
        int size = 2*k+1;
        int kc = v[i].second-v[i].first+1;
        int cot = kc*1.0/size;
        kc -= cot*size ;
        if( kc > 0 ) cot++;
        cnt += cot;
    } 
    cout << cnt;
} 