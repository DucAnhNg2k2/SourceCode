#include<bits/stdc++.h>
using namespace std;
int n;
bool a[300][300];
bool vs[300];

void bfs(int i) {
    queue<int> q;
	q.push(i);
	while( !q.empty() ) {
		int u = q.front(); q.pop();
		if( vs[u] ) continue;
		vs[u] = true;
		for(int i = 1 ; i<= n; i++) {
			if( vs[i] == false && a[u][i] ) {
				q.push(i);
			}
		}
	}
}

int main() {
    cin >> n;
	int dem = 0;
    for(int i = 1 ; i <= n ; i++ ) {
        for(int j = 1 ; j <= n ; j++ )
          cin >> a[i][j];
    }
	for(int i = 1 ; i <= n ; i++ ) {
		if( vs[i] == false) {
			bfs(i);
			dem++;
		}
	}
	cout << dem;
}