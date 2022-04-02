#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    double s = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        s += a[i];
    }
    cout << std::setprecision(12) << fixed << s/n;
} 
