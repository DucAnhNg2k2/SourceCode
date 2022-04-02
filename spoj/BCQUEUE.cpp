#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    queue<int> q;
    while( t-- ){
        int n;
        cin >> n;
        if( n == 1 ) cout << q.size() << endl;
        if( n == 2 ){
            if( q.empty() ) cout <<"YES" << endl;
            else cout << "NO" << endl;
        }
        if( n == 3 ){
            int d;
            cin >> d;
            q.push(d);
        }
        if( n == 4 ){
            if( !q.empty() ) q.pop();
        }
        if( n == 5 ){
            if( !q.empty() ) cout << q.front() << endl;
            else cout << -1 << endl;
        } 
        if( n == 6){
            if( !q.empty() ) cout << q.back() << endl;
            else cout << -1 << endl;
        }
    }
} 
