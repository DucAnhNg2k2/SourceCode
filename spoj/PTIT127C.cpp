#include<bits/stdc++.h>
using namespace std;
struct SS{
    int s;
    int f;
};
bool check(SS a,SS b){
    return a.f < b.f;
}
int main(){
    int n;
    cin >> n;
    SS S[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> S[i].s >> S[i].f;
    }
    sort(S,S+n,check);
    int dem = 0 ;
    int x = 0;
    for(int i = 0 ; i < n ; i++ ){
        if( x <= S[i].s ){
            x = S[i].f;
            dem++;
        } 
    }
    cout << dem;
} 
