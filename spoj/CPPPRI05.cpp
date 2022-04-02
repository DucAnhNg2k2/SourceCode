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
    sangnt();
    int t;
    cin >> t;
    while( t-- ){
        int a,b;
        cin >> a >> b;
        for(int i = a ; i <= b; i++ ){
            if( mark[i] == false ) cout << i << ' ';
        }
        cout << endl;
    }
} 
