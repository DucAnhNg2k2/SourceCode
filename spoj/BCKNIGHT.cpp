#include <bits/stdc++.h>
using namespace std;
int h[11][11] = {0} ;
int n ;
// cac vi tri con ma co the di duoc khi dang o vi tri x,y
/*
	1) x+2 , y+1		5) x+1, y+2
	2) x+2 , y-1		6) x+1, y-2
	3) x-2 , y+1		7) x-1, y+2
	4) x-2 , y-1		8) x-1, y-2
 
*/
int a[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int b[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
void Xuat(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j<= n ; j++ ){
			cout << h[i][j] <<" ";
		}
		cout << endl;
	}
}
void Try(int i,int x,int y ){
	int u, v;
	for(int k = 0 ; k <= 7 ; k++ ){
		u = x + a[k];
		v = y + b[k];
		if( 1 <= u && u <= n && 1 <= v && v <= n && h[u][v] == 0 ){
			h[u][v] = i;
			if( i == n*n ) Xuat();
			else {
			Try(i+1,u,v);
			h[u][v] = 0;
			}
		}
	}
}
int main(){
	int x , y;
	cin >> n >> x >> y;
	h[x][y] = 1;
	Try(2,x,y);
} 
