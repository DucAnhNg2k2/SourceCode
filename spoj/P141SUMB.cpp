#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(5001,0);
    for(int i = 0 ; i < n ; i++ ){
        int d;
        cin >> d;
        a[d]++;
    }
    int dem = 0 ;
    for(int i = 1 ; i<= n ; i++ ){
        if ( a[i] > 1 ) dem += (a[i]-1);
    }
    for(int i = n+1 ; i <= 5000 ; i++ ){
        if( a[i] > 0 ) dem += (a[i]);
    }
    cout << dem;
} 
