#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    int a[m];
    for(int i = 0 ; i < m ; i++ ){
        cin >> a[i];
    }
    sort(a,a+m);
    int min = 1e6;
    for(int i = 0 ; i < m - n + 1 ; i++ ){
		int t = a[i+n-1] - a[i];
		if( min > t ) min = t;
    }
    cout << min;
} 
