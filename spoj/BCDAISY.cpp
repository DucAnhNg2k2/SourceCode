#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x;
    int y;
};
int main(){
    int n,m;
    cin >> n >> m ;
    bool a[n+1] ={0};
    Point p[m];
    for(int i = 0 ; i < m ; i++ ){
        cin >> p[i].x >> p[i].y;
    }
    a[1] = true;
    for(int i = 1 ; i <= n ; i++ ){
        for(int i = 0 ; i < m ; i++ ){
            if( a[p[i].x] == true  ) a[p[i].y] = true;
            if( a[p[i].y] == true  ) a[p[i].x] = true; 
        }
    }
    bool check = true;
    for(int i = 1 ; i<= n ; i++ ){
        if( a[i] == false ){
            cout << i << endl;
            check = false;
        }
    }
    if( check == true ) cout << 0 << endl;
} 
