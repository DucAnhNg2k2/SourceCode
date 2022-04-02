#include<bits/stdc++.h>
using namespace std;
int b[42] = {0};
int main(){
    for(int i = 1 ; i<= 10 ; i++ ){
        long long d;
        cin >> d;
        b[d%42]++;
    }
    int dem = 0 ;
    for(int i = 0 ; i < 42 ; i++ ){
        if(b[i]!=0) dem++;
    }
    cout << dem;
} 
