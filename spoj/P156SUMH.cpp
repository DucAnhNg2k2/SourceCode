#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int mid = (n+1)/2;
    int left = mid - 1;
    int right = mid + 1;
    for(int i = 1 ; i <= (n+1)/2 ; i++ ){
        for(int j = 1 ; j <=n ; j++ ){
            if( j <= left || j >= right ) cout << '*';
            else cout << 'D';
        }
        cout << endl;
        left--;
        right++;
    }
    left+=2;
    right-=2;
    for(int i = (n+1)/2+1 ; i <= n ; i++){
        for(int j = 1 ; j<= n ; j++ ){
            if( j <= left || j >= right ) cout << '*';
            else cout << 'D';
        }
        cout << endl;
        left++;
        right--;
    }
} 
