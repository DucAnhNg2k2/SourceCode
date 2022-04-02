#include<bits/stdc++.h>
using namespace std;
// sang nguyen to
vector<bool> mark(1e6+1,0);
void sangnt(){
    mark[0] = 1;
    mark[1] = 1;
    for(int i = 2 ; i*i <= 1e6 ; i++ ){
        if( !mark[i] ){
            for(int j = i*i ; j <= 1e6 ; j+=i ){
                mark[j] = 1;
            }
        }
    }
}
// sang phan tich thanh so nguyen to 
vector<int> minIsPrime(1e6+1,0);
void sangptnt(){
    for(int i = 2 ; i*i <= 1e6 ; i++ ){
        // neu i la so nguyen to
        if( !minIsPrime[i] ){
            for(int j = i *i ; j <= 1e6 ; j +=i ){
                // neu boi cua i chua duoc kiem tra
                if( !minIsPrime[j] ) minIsPrime[j] = i;
            }
        }
    }
    for(int i = 1 ; i <= 1e6 ; i++ ){
        if( !minIsPrime[i] ) minIsPrime[i] = i;
    }
}
int tong(int n){
    int sum = 0 ;
    while( n > 0 ){
        sum += n%10;
        n/=10;
    }
    return sum;
}
void solve(){
    int n;
    cin >> n;
    if( mark[n] == false ){
        cout << "NO" << endl;
        return ;
    }
    else
    {   int sumN = tong(n);
        int sumUoc = 0 ;
        while( n > 1 ){
            sumUoc += tong(minIsPrime[n]);
            n /= minIsPrime[n];
        }
        if( sumUoc == sumN ) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sangnt();
    sangptnt();
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
