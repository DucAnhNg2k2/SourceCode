#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Run{
    ll gio;
    ll phut;
    ll giay;
    ll time;
};
bool check(Run r1,Run r2){
    return r1.time < r2.time;
}
int main(){
    int n;
    cin >> n;
    Run r[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> r[i].gio >> r[i].phut >> r[i].giay;
        r[i].time = r[i].gio*3600 + r[i].phut*60 + r[i].giay;
    }
    sort(r,r+n,check);
    for(int i = 0 ; i < n; i++){
        cout << r[i].gio << " " << r[i].phut << " " << r[i].giay << endl;
    }
} 
