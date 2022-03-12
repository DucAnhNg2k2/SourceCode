#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    cin >> a[0] >> a[1] >> a[2];
    int n = 4;
    for(int i = 0 ; i < n-2 ;i++){
        for(int j = i+1 ; j < n-1;j++){
            if( a[i] > a[j]) swap(a[i],a[j]);
        }
    }
    if( a[2]-a[1] == a[1]-a[0]){
        cout << a[2] + a[2]-a[1];
        return 0;
    }
    if( (a[1]-a[0])*2 == a[2]-a[1]){
        cout << a[2] - (a[1] -a[0]);
        return 0;
    }
    if( (a[2] -a[1])*2 == a[1] -a[0]){
        cout << a[1] - (a[2]-a[1]);
        return 0;
    }
} 
