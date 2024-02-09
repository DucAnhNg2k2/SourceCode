#include<bits/stdc++.h>
using namespace std;

char a[1005][1005] = {};

struct Point {
	int x,y;
	Point() {}
	Point(int x,int y) {
		this->x = x;
		this->y = y;
	}
};

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	int res = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(a[i][j] == '*') {
				queue<Point> q;
				q.push(Point(i,j));
				int dem = 0;
				while(q.size()) {
					dem++;
					int x = q.front().x, y = q.front().y;
					a[x][y] = '.';
					q.pop();
					if(a[x-1][y] == '*') {
						q.push(Point(x-1,y));
					}
					if(a[x+1][y] == '*') {
						q.push(Point(x+1,y));
					}
					if(a[x][y-1] == '*') {
						q.push(Point(x,y-1));
					}
					if(a[x][y+1] == '*') {
						q.push(Point(x,y+1));
					}
				}
				if(dem >= 3) res++;
			}
		}
	}
	cout << res << endl;
}

