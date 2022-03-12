#include<bits/stdc++.h>
using namespace std;
int n;
bool a[300][300];
bool vs[300];

void dfs(int u) {
    cout << u << ' ';
    vs[u] = true;
    for(int i = 1 ; i <= n ; i++ ) {
        if( vs[i] == false && a[u][i] ) {
            dfs(i);
        }
    }    
}

int main() {
    cin >> n;
    for(int i = 1 ; i <= n ; i++ ) {
        for(int j = 1 ; j <= n ; j++ )
          cin >> a[i][j];
    }
    dfs(1);
}