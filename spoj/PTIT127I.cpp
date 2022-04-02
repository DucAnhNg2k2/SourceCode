#include<bits/stdc++.h>
using namespace std;
string solve(int t){
    int a1,a2,a3,a4,a5,a6;
    vector<int> a(50,0);
    for(int i = 1 ; i<= t ; i++ ){
        cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
        a[a1]++;
        a[a2]++;
        a[a3]++;
        a[a4]++;
        a[a5]++;
        a[a6]++;
    }
    for(int i =1 ; i<= 49 ;i++){
        if( a[i] == 0 ) return "No";
    }
    return "Yes";
}
int main(){
    while(true){
        int t;
        cin >> t;
        if( t== 0 ) break;
        cout << solve(t) << endl;
    }
} 
