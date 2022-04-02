#include<bits/stdc++.h>
using namespace std;
vector<bool> mark(100001,false);
void sangnt(){
    mark[0] = true;
    mark[1] = true;
    for(int i = 2 ; i*i <= 100000 ;i++){
        if( !mark[i] )
        for(int j = i*i ; j <= 100000 ;j+= i){
            mark[j] = true;
        }
    }
}
int a[10000];
int size = 0;
void khoiTaoMangNt(){
    for(int i = 2 ; i <= 100000; i++){
        if( mark[i] == false){
            a[size] = i;
            size++;
        }
    }
}
int l[10000];
void QHD(){
    l[0] = a[0];
    for(int i = 0 ; i <= size ; i++ ){
        l[i] = a[i] + l[i-1];
    }
}
bool BinarySearch(int left,int right,int S){
    while( left<=right){
        int mid = (left+right)/2;
        if( l[mid] == S) return true;
        else if( l[mid] > S ){
            right = mid -1;
        }
        else left = mid+1;
    }
    return false;
}
int main(){
    sangnt();
    khoiTaoMangNt();
    QHD();
    int t;
    cin >> t;
    while( t-- ){
        int dem = 0;
        int n;
        cin >> n;
        for(int i = 0 ; i <= size ; i++){
            if( a[i] > n ) break;
            if( l[i] == n ) dem++;
            if( l[i] > n ){
                if( BinarySearch(0,i-1,l[i]-n)) dem++;
            }
        }
        cout << dem << endl;
    }
} 
