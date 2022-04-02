#include<bits/stdc++.h>
using namespace std;
int main(){
    string res = "";
    for(int i = 1 ; i < 400 ; i++ ){
        int tmp = i;
        string test = "";
        while( tmp > 0 ){
            test = (char)(tmp%10+'0') + test;
            tmp /=10;
        }
        res = res + test;
    }
    int n;
    cin >> n;
    cout << res[n-1];
} 
