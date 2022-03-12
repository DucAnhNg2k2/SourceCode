#include<bits/stdc++.h>
using namespace std;

#define ii pair<int,int>
#define mp make_pair
#define pb push_back

vector<vector<ii>> ds;
void BFS(int x,int y,vector<vector<char>> &s,vector<vector<bool>> &check)
{
    bool kiemtra = true;
    queue<ii> q;
    q.push(mp(x,y));
    check[x][y] = false;
    vector<ii> v;
    v.pb(mp(x,y));
    while( !q.empty() ) 
    {
        ii temp = q.front();
        q.pop();
        int x = temp.first , y = temp.second;

        if( s[x-1][y] == '.' ) kiemtra = false;
        else if( s[x-1][y] == 'O' && check[x-1][y] )
        {
            q.push(mp(x-1,y));
            v.pb(mp(x-1,y));
            check[x-1][y] = false;
        } 

        if( s[x][y+1] == '.' ) kiemtra = false;
        else if( s[x][y+1] == 'O' && check[x][y+1] )
        {
            q.push(mp(x,y+1));
            v.pb(mp(x,y+1));
            check[x][y+1] = false;
        }

        if( s[x][y-1] == '.' ) kiemtra = false;
        else if( s[x][y-1] == 'O' && check[x][y-1] )
        {
            q.push(mp(x,y-1));
            v.pb(mp(x,y-1));
            check[x][y-1] = false;
        }  

        if( s[x+1][y] == '.' ) kiemtra = false;
        else if( s[x+1][y] == 'O' && check[x+1][y] )
        {
            q.push(mp(x+1,y));
            v.pb(mp(x+1,y));
            check[x+1][y] = false;
        } 
    }
    if( kiemtra == false )
        return ;
    ds.pb(v);
}
void solve()
{
    int n,m;
    cin >> n >> m;
    ds.clear();
    vector<vector<char>> s(n+5,vector<char>(m+5,'.'));
    vector<vector<bool>> check(n+5,vector<bool>(m+5,true));

    for(int i = 1 ; i <= n ; i++ )
        for(int j = 1 ; j <= m ; j++ )
            cin >> s[i][j];
    
    for(int i = 1 ; i <= n ; i++ )
        for(int j = 1 ; j <= m ; j++ )
            if( s[i][j] == 'O' && check[i][j] )
            {
                BFS(i,j,s,check);
            }
    for(int i = 0 ; i < ds.size() ; i++ )
        for(int j = 0 ; j < ds[i].size() ; j++ )
            s[ds[i][j].first][ds[i][j].second] = 'X';

    for(int i = 1 ; i <= n ; i++ )
    {
        for(int j = 1 ; j <= m ; j++ )
        {
            cout << s[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
        solve();
}