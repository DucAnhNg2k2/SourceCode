#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s1 , s2;
    cin >> s1 >> s2;
    for(int i = 0 ; i < n ; i++ ){
        char a = s1[i];
        char b = s2[i];
        if(a=='B'){
            if(b=='K') cout<<'B';
            else cout<<'G';
        }
        if(a=='K'){
            if(b=='G') cout<<'K';
            else cout <<'B';
        }
        if(a=='G'){
            if(b=='B') cout<<'G';
            else cout <<'K';
        }
    }
} 
