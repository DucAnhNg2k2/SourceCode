#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Dragon{
    ll x;
    ll y;
};
bool check(Dragon a,Dragon b){
    return a.x < b.x;
}
int main(){
    ios_base::sync_with_stdio(false);
    ll s , n;
    cin >> s >> n;
    Dragon d[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> d[i].x >> d[i].y;
    }
    int count = 0 ;
    sort(d,d+n,check);
    for(int i = 0 ; i < n ; i++ ){
        if( s > d[i].x ){
            count++;
            s += d[i].y;
        }
    }
    if( count >= n ) cout <<"YES";
    else cout <<"NO";
} 
