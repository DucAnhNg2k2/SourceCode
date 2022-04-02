#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(ll a,ll b){
    return a > b;
}
int main(){
    int n , k ;
    cin >> n >> k;
    ll a[n];
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];
    sort(a+1,a+n,cmp);
    ll sum = 0;
    for(int i = 0 ; i <= k ; i++ ){
        sum += a[i];
    }
    for(int i = k +1 ; i < n ; i++ ){
        sum -= a[i];
    }
    cout << sum;
} 
