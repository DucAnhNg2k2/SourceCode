#include<bits/stdc++.h>
using namespace std;
 
int a[9] = {1,1,-1,-1,2,2,-2,-2};
int b[9] = {2,-2,2,-2,1,-1,1,-1};
int MIN = 1e5 ;
int returnInt(char c)
{
	if( c =='a' ) return 1;
	else if( c =='b' ) return 2;
	else if( c =='c' ) return 3;
	else if( c =='d' ) return 4;
	else if( c =='e' ) return 5;
	else if( c =='f' ) return 6;
	else if( c =='g' ) return 7;
	else if( c == 'h' ) return 8;
}
struct Point
{
	int x,y,buoc;
};
Point st,en;
bool check[9][9] ;
bool CHECK(Point x)
{
	if( x.x > 8 || x.x < 1 ) return false;
	if( x.y > 8 || x.y < 1 ) return false;
	if( check[9-x.y][x.x] ) 
	{
		check[9-x.y][x.x] = false ;
		return true ;
	}
	return false;
}
void BFS(Point dinh)
{
	queue<Point> q;
	q.push(dinh);
	CHECK(dinh);
	while( !q.empty() )
	{
		Point top = q.front() ; q.pop() ;
//		cout << top.x << ' ' << top.y << ' ' << top.buoc << endl ;
		if( top.x == en.x && top.y == en.y )
		{
			if( MIN > top.buoc ) MIN = top.buoc;
		}
		for(int i = 0 ; i < 8 ; i++ )
		{
			Point temp;
			temp.x = top.x + a[i];
			temp.y = top.y + b[i];
			if( CHECK(temp) )
			{
				temp.buoc = top.buoc + 1 ;
				q.push(temp);
			}
		}
	}
}
void solve()
{
	for(int i = 1 ; i <= 8 ; i++ )
		for(int j = 1 ; j <= 8 ; j++ )
			check[i][j] = true ;
	string s1,s2;
	cin >> s1 >> s2;
	st.x = returnInt(s1[0]);
	st.y = (int)(s1[1]-'0');
	st.buoc = 0 ;
	en.x = returnInt(s2[0]);
	en.y = (int)(s2[1]-'0');
	MIN = 1e5 ;
	BFS(st);
	cout << MIN << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	solve();
} 
