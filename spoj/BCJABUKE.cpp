#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,m;
    cin >> n >> m;
    int left = 1;
    int right = m;
    int t;
    cin >> t;
 
    int h = 0;
 
    while( t-- ){
        int test;
        int a;
        cin >> a;
        if( a >= left && a <= right ) continue;
        if( a < left ){
            h += left -a;
            left = a;
            right = left + m-1;
        }
        if( a > right ){
            h += a-right;
            right = a;
            left = right -m+1;
        }
    }
    cout << h;
} 
