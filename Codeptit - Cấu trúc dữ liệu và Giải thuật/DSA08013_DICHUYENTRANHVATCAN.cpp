#include<bits/stdc++.h> 
using namespace std;
// https://code.ptit.edu.vn/student/question/OLP019
vector<vector<char>> s(105,vector<char>(105,'X'));
vector<vector<bool>> f(105,vector<bool>(105,false));
struct Node
{
	int x,y,dem;
	Node(int x,int y,int dem)
	{
		this->x = x;
		this->y = y;
		this->dem = dem;
	}
};
int n,a,b,c,d;
void BFS(int x,int y) {
	queue<Node> q;
	q.push(Node(x,y,0));
	f[x][y] = false;
	while( !q.empty() ) {
		Node top = q.front();
		q.pop();
		int u = top.x , v = top.y , cnt = top.dem;
		if( u == c && v == d ) {
			cout << cnt << endl;
			return ;
		}
		for(int i = v+1 ; i <= n ; i++ ) {
			if( f[u][i] ) 
			{
				f[u][i] = false;
				q.push(Node(u,i,cnt+1));
			}
			else break;
		}
		for(int i = v-1 ; i >= 1; i-- ) {
			if( f[u][i] ) 
			{
				f[u][i] = false;
				q.push(Node(u,i,cnt+1));
			}
			else break;
		}
		for(int i = u+1 ; i <= n ; i++ ) {
			if( f[i][v] ) 
			{
				f[i][v] = false;
				q.push(Node(i,v,cnt+1));
			}
			else break;
		}
		for(int i = u-1 ; i >= 1 ; i-- ) {
			if( f[i][v] ) 
			{
				f[i][v] = false;
				q.push(Node(i,v,cnt+1));
			}
			else break;
		}
	}
}

void solve() {
	for(int i = 0 ; i <= 101;i++) {
		for(int j = 0 ; j <=101;j++ ) {
			f[i][j] = false;
		}
	}
	cin >> n;
	for(int i = 1 ; i <= n ; i++ )
		for(int j = 1 ; j <= n ; j++ )
		{
			cin >> s[i][j];
			if( s[i][j] == '.' ) f[i][j] = true;
		}
	cin >> a >> b >> c >> d;
	a++;b++;c++;d++;
	BFS(a,b);

}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
