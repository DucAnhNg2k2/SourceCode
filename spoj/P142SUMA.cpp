#include<bits/stdc++.h>
bool BinarySearch(long long a[],int l,int r, long long s){
    while( l <= r ){
        int m = (l+r)/2;
        if( a[m] == s ) return true;
        else if(a[m] > s ) r = m-1;
        else l =m+1;
    }
    return false;
}
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long a[44721] ;
    int k = 1;
    for(int i = 0 ; i < 44721 ; i++ ){
        a[i] = k*(k+1)/2;
        k++;
    }
    long long n;
    cin >> n;
    for(int i = 0 ; a[i] <= n ; i++ ){
        if(BinarySearch(a,0,i,n-a[i])){
            cout <<"YES";
            return 0;
        }
    }
    cout <<"NO";
} 
