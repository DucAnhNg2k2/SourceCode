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
void phantichNto(int n){
    while( n > 1){
        cout << minIsPrime[n] << ' ';
        n /=minIsPrime[n];
    }
    cout << endl;
}
// dem so luong so nguyen to trong 1 khoang
vector<int> dem(1e6+1,0);
void demnt(){
    for(int i = 2 ; i <= 1e6 ; i++ ){
        if( mark[i]==0 ){
            dem[i] = dem[i-1] +1;
        }
        else{
            dem[i] = dem[i-1];
        }
    }
}
int main(){   
    sangnt();
    sangptnt();
    demnt();
    int x,y;
    cin >> x >> y;
    if( dem[y] - dem[x] == 1 ) cout << "YES";
    else cout <<"NO";
} 
