#include<bits/stdc++.h>
using namespace std;
int main(){
    long long L[93];
    L[1] = 1;
    L[2] = 1;
    for(int i = 3 ; i < 93 ; i++ ) L[i] = L[i-1] + L[i-2];
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        cout << L[n] << endl;
    }
    
} 
