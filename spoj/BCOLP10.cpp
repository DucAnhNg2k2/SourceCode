#include<bits/stdc++.h>
using namespace std;
int a[300]={0};
int b[300]={0};
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    for(int i = 0 ; i <s1.length() ;i++){
        a[s1[i]]++;
    }
    for(int i = 0 ; i < s2.length() ;i++){
        b[s2[i]]++;
    }
    int sum = 0 ;
    for(int i = 0 ; i <300;i++){
        sum += abs(a[i]-b[i]);
    }
    cout << sum;
} 
