#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll x;
    cin >> x;
    ll L[10000];
    L[0] = 0 ;
    for(int i = 1 ; i < 10000 ; i++ ){
        L[i] = L[i-1] + i;
    }
    int dem = 0 ;
    for(int i = 1 ; i < 10000 ; i++ ){
        if( x < L[i]) break;
        else{
        	dem++;
        	x -= L[i];
		}
    }
    cout << dem;
} 
