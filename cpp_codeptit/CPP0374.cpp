#include<bits/stdc++.h> 
using namespace std;

string s ;
int n , f[1000005][5];
int main()
{
    cin >> s;
    n = s.size() ; 
    s = '@' + s;
    vector<pair<int,int>> v;
    char c = 'c';
    for(int i = 1 ; i <= n ; i++ )
    {
        if( c != s[i] ) 
        {
            c = s[i];
            v.push_back(make_pair(c,1));
        }
        else 
        {
            while( c == s[i] )
            {
                v[v.size()-1].second++;
                i++;
            }
            i--;
        }
    }
    if( v[0].first == 'A' ) 
    {
        f[0][1] = 0;
        f[0][2] = 1;
    }
    else 
    {
        f[0][1] = 1;
        f[0][2] = 0;
    }
    for(int i = 1 ; i < v.size() ; i++ )
    {
        if( v[i].first == 'A' )
        {
            f[i][1] = f[i-1][1];
            f[i][2] = min(f[i-1][2]+v[i].second,f[i-1][1]+1);
        }
        else 
        {
            f[i][1] = min(f[i-1][1]+v[i].second,f[i-1][2]+1);
            f[i][2] = f[i-1][2];
        }
    }
    cout << f[v.size()-1][1] ;
} 
 