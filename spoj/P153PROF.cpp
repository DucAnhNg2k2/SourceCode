#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    ll a[n];
    ll b[n];
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];
    for(int i = 0 ; i < n ; i++ ) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    int start = n - 1;
    int dem = 0 ;
    for(int i = n - 1 ; i >= 0; i-- ){
        if ( a[i] < b[start] ){
            start--;
            dem++;
        }
    }
    cout << dem ;
} 
