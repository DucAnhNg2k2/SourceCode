#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int week = n/7;
    int day = n%7;
    int fd = week*2; // freeday
    if( day == 0 ){
        cout << fd << ' ' << fd ;
        return 0;
    }
    if( day == 1 ){
        cout << fd << ' ' << fd + 1;
        return 0;
    }
    if( day <= 5){
         cout << fd << ' ' << fd + 2;
         return 0;
    }
    cout << fd+1 << ' ' << fd + 2;
} 
