#include<bits/stdc++.h>
using namespace std;
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
    demnt();
    while(true){
        int n;
        cin >> n;
        if( n == 0 ) break;
        cout << dem[2*n] - dem[n] << endl;
    }
} 
