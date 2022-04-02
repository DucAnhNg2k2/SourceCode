#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , a , b;
    cin >> n >> a >> b;
    int dem = 0 ;
    for(int i = 1 ; i <= b+1 ; i++ ){
        int truoc = n - i;
        if( truoc >= a ) dem++;
    }
    cout << dem;
} 
