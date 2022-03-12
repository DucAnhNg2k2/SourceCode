#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dem = 0;
    for(int i = 0 ; i < s.length() ; i++ ){
        if( s[i]=='S') dem++;
        else{
            dem++;
            i++;
        }
    }
    dem ++;
    cout << min(dem,n);
} 
