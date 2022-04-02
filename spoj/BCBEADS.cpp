#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    int dem = 0;
    for(int i = 0 ; i < n-1 ; i++ ){
        if( a[i]!=a[i+1] ) dem++;
    }
    cout << dem;
} 
