#include<bits/stdc++.h>
using namespace std;

int x,y,z,t,n,m;
bool s[2005][2005];
bool check[2005][2005];

struct Node{
	int x,y,dem;
};
Node push_node(int x,int y,int dem)
{
	Node temp;
	temp.x = x;
	temp.y = y;
	temp.dem =dem;
	return temp;
}
void BFS(int x,int y)
{
	queue<Node>q;
	q.push(push_node(x,y,0));
	check[x][y] = false;

	while( !q.empty() )
	{
		Node top = q.front();
		q.pop();
		int x = top.x, y = top.y, dem = top.dem;
		if( x == z && y == t )
		{
			cout << dem << endl;
			return;
		}
		if( check[x-1][y] )
		{
			check[x-1][y] = false;
			q.push(push_node(x-1,y,dem+1));
		}
		if( check[x+1][y] )
		{
			check[x+1][y] = false;
			q.push(push_node(x+1,y,dem+1));
		}
		if( check[x][y-1] )
		{
			check[x][y-1] = false;
			q.push(push_node(x,y-1,dem+1));
		}
		if( check[x][y+1] )
		{
			check[x][y+1] = false;
			q.push(push_node(x,y+1,dem+1));
		}
	}
	cout << -1 << endl;
}
void solve()
{
	cin >> n >> m >> x >> y >> z >> t;
	x++;y++;z++;t++;
	for(int i = 0 ; i <= n+5 ; i++ )
		for(int j = 0 ; j <= m+5 ; j++ )
			{
				s[i][j] = 0;
				check[i][j] = false;
			}
	for(int i = 1 ; i <= n ; i++ )
	{
		for(int j = 1 ; j <= m ; j++ )
			{
				cin >> s[i][j];
				if( s[i][j] == 1 ) 
				{
					check[i][j] = 1;
				}
			}
	}
	if( check[x][y] == 0 )
	{
		cout << -1 << endl;
		return ;
	}
	BFS(x,y);
}

int main() 
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
		solve();
}
