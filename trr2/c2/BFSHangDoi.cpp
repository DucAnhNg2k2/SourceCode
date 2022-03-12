#include<bits/stdc++.h>
using namespace std;
int n;
bool a[300][300];
bool vs[300];

void bfs() {
    queue<int> q;
	q.push(1);
	while( !q.empty() ) {
		int u = q.front(); q.pop();
		if( vs[u] ) continue;
		vs[u] = true;
		cout << u << ' ';
		for(int i = 1 ; i<= n; i++) {
			if( vs[i] == false && a[u][i] ) {
				q.push(i);
			}
		}
	}
}

int main() {
    cin >> n;
    for(int i = 1 ; i <= n ; i++ ) {
        for(int j = 1 ; j <= n ; j++ )
          cin >> a[i][j];
    }
    bfs();
}