#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    map<int,int> m;
    for(int i =2 ; i <= sqrt(n) ; i++ ){
        while( n%i==0 ){
            m[i]++;
            n/=i;
        }
    }
    if( n > 1 ) m[n]++;
    for(map<int,int> ::iterator i = m.begin() ; i != m.end() ; i++ ){
        cout << (*i).first <<' ' << (*i).second << ' ';
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    while( n-- ){
        solve();
    }
} 
