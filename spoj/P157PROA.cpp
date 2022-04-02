#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(1001,0);
    while( n-- ){
        int d;
        cin >> d;
        a[d]++;
    }
    int max = 0;
    int cs = 0;
    for(int i = 0 ; i <= 1000 ; i++ ){
        if( max < a[i] ){
            max = a[i];
            cs = i;
        }
        if( max == a[i]){
            if( cs > i ) cs = i;
        }
    }
    cout << cs << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
