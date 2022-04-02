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
int main(){
    ios_base::sync_with_stdio(false);
    sangnt();
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        for(int i = 2 ; i <= n ; i++ ){
            if( mark[i] == false ) cout << i << ' ';
        }
        cout << endl;
    }
}  
