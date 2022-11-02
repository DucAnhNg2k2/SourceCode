#include<bits/stdc++.h>
using namespace std;

#define ii pair<int,int>
#define mp make_pair
#define pb push_back

void solve()
{
    string s;
    cin >> s;
    int dem = 0;
    for(int i = 0 ; i < s.size() ; i++ )
    {
        if( i >= 0 && i+2 < s.size() )
        {
            if( s[i] == '1' && s[i+1] == '0' && s[i+2] == '0' )
            {
                s.erase(i,3);
                i = max(i-3,0);
                dem += 3;
            }   
        }
    }
    if( dem != 0 ) cout << dem;
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
        solve();
}