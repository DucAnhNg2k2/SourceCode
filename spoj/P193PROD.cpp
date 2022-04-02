#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int w;
    cin >> w;
    for(int x = 1 ; x <= w ; x++ ){
        for(int a = 2 ; a < w ; a+=2 ){
            for(int b = 2 ; b < w ; b+=2){
                if( (w - x*a)%b == 0  ){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
} 
