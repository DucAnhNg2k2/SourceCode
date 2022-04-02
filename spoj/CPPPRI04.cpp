#include<bits/stdc++.h>
using namespace std;
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
int main(){
    sangptnt();
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        cout << 1 << ' ';
        for(int i = 2 ; i <= n ; i++ ){
            cout << minIsPrime[i] <<' ';
        }
        cout << endl;
    }
}
