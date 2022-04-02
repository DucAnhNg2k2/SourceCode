#include<bits/stdc++.h>
using namespace std;
int main(){
    set<long long> s;
    for(int i = 0 ; i < 4 ; i++ ){
        long long d;
        cin >> d;
        s.insert(d);
    }
    cout << 4 - s.size();
} 
