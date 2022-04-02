#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    vector<string> v;
    v.resize(n);
    for(int i = 0 ; i < n ; i++ ){
        cin >> v[i];
    }
    int dem = 0;
    for(int i = 0 ; i < n-1 ; i++ ){
       	if( v[i][1] == v[i+1][0] ) dem++;
    }
    cout << dem+1;
} 
