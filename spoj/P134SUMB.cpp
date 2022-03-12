#include<bits/stdc++.h>
using namespace std;
int main(){
    long long G, Y;
    cin >> G >> Y;
    // x + y = G/2 + 2
    // x * y = S
   long long s1 = G/2 + 2;
   long long s2 = G + Y;
   long long delta = s1*s1 - 4*s2;
   long long x1 = (s1+sqrt(delta))/2;
   long long x2 = s2/x1;
   cout << min(x1,x2) << " " << max(x1,x2);
} 
