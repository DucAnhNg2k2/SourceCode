#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    ll n , M;
    cin >> n >> M;
    ll a[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    ll max = INT_MIN;
    for(int i = 0 ; i < n -2 ; i++){
        for(int j = i + 1 ; j < n - 1 ; j++ ){
            for(int k = j+1 ; k < n ; k++ ){
                if( a[i] + a[j] + a[k] <= M ){
                    if ( max < a[i] + a[j] + a[k] ) max = a[i] + a[j] + a[k];
                }
            }
        }
    }
    cout << max;
} 
