#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    cin >> s;
    int dem1 = 0 , dem2 = 0 ;
    for(int i = 0 ;i < s.size() ; i++ )
    {
        if( s[i] =='x') dem1++;
        else dem2++;
    }
    if( dem1 > dem2 ) 
    {
        for(int i = 1 ; i <= abs(dem1-dem2) ; i++ )
        {
            cout << 'x';
        }
    }
    else
    {
        for(int i = 1 ; i <= abs(dem1-dem2) ; i++ )
        {
            cout << 'y';
        }
    }
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- )
    {
        solve();
    }
}
