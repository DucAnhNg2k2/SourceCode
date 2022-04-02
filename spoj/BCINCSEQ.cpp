#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    int max = 0;
    int dem = 1;
    for(int i = 1 ; i < n ; i++ ){
        if( a[i] >= a[i-1] ) dem++;
        else{
            dem = 1;
        }
        if( max < dem ) max = dem;
    }
    cout << max;
} 
