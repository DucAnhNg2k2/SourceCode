#include<bits/stdc++.h>
using namespace std;
 
struct Point{
    int x, y;
};
Point push_point(int x,int y) {
    Point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
 
vector<vector<bool> > check(300,vector<bool>(300,true));
vector<vector<char> > a(300,vector<char>(300,'.'));
 
void BFS(int u,int v) {
	
    check[u][v] = false;
    queue<Point> q;
    q.push(push_point(u,v));
    while( !q.empty() ) {
        int x = q.front().x ;
        int y = q.front().y ;
        q.pop() ;
        for(int i = x-1 ; i <= x+1 ; i++ ) {
            for(int j = y-1 ; j <= y+1 ; j++ ) {
                if( check[i][j] && a[i][j] == 'W' ) {
                    q.push(push_point(i,j));
                    check[i][j] = false ;
                }
            }
        }
    }
}
int main()
{  
//	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++ ) {
        for(int j = 1 ; j <= m ; j++ ) {
            cin >> a[i][j] ;
        }
    }
    int dem = 0 ;
    for(int i = 1; i <= n; i++ ) {
        for(int j = 1 ; j <= m ; j++ ) {
            if( check[i][j] && a[i][j] == 'W') {
        			BFS(i,j) ;
                	dem++;
            }        
        }
    }   
	cout << dem ;
}   
/*
10 12 
W........WW.
.WWW.....WWW
 
....WW...WW.
 
.........WW.
 
.........W..
 
..W......W..
.W.W.....WW.
 
W.W.W.....W.
 
.W.W......W.
 
..W.......W.
*/ 