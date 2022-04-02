#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int dem1 = 0 ;
    int dem2 = 0 ;
    int dem3 = 0 ;
    for(int i = 1 ; i <= 6 ; i++ ){
        if( abs(i-a) < abs(i-b) ) dem1++;
        else if(abs(i-a) == abs(i-b) ) dem2++;
        else dem3++;
    }
    cout << dem1 << ' ' << dem2 << ' ' << dem3;
} 
