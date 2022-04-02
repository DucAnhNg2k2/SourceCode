#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a1 = 0 , a2 = 0 , a3 = 0;
    for(int i = 0 ; i < n ; i++ ){
        int d;
        cin >> d;
        if( d == 25 ) a1++;
        if( d == 50 ) a2++;
        if( d == 50 ){
            if( a1 == 0 ){
                cout << "NO";
                return 0;
            }
            else{
                a1--;
            }
        }
        if( d == 100 ){
            if( a1 == 0 ){
                cout <<"NO";
                return 0;
            }
            else{
                if( a2 == 0 ){
                    if( a1 < 3 ){
                        cout <<"NO";
                        return 0;
                    }
                    else a1 -=3;
                }
                else{
                    a1--;
                    a2--;
                }
            }
        }
    }
    cout <<"YES";
} 
