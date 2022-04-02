#include<bits/stdc++.h>
using namespace std;
int a[24][60] = {0};
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++ ){
        int x , y;
        cin >> x >> y;
        a[x][y]++;
    }
    int max = 0 ;
    for(int i = 0 ; i < 24 ; i++ ){
        for(int j = 0 ; j < 60 ; j++ ){
            if( max < a[i][j] ) max = a[i][j];
        }
    }
    cout << max;
}
 
