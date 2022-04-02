#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a[n];
    long long l[n];
    for(int i = 0 ; i < n;  i++) cin >> a[i];
    l[0] =1;
    int max;
    for(int i = 1 ; i < n ; i++){
        max = 0;
        for(int j = 0 ; j < i ; j++ ){
            if( max <= l[j] && a[j] < a[i] ) max = l[j];
        }
        l[i] = max +1;
    }
    max = 0;
    for(int i = 0 ; i < n ; i++ ){
        if( max < l[i] ) max = l[i];
    }
    cout << max;
} 
