#include<bits/stdc++.h>
using namespace std;
int main(){
    long long s;
    cin >> s;
    if( s % 2 == 0 ){
        long long n = (s-2)/2 + 1;
        long long S = s - 1;
        long long N = (S-1)/2 + 1;
        cout << n*(s+2)/2 - N*(S+1)/2;
    }
    if( s%2 == 1 ){
        long long n = (s-1)/2 + 1;
        long long S = s - 1;
        long long N = (S-2)/2 + 1;
         cout << - n*(s+1)/2 + N*(S+2)/2;
    }
}
