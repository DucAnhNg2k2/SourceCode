#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int dem = 0 ;
    for(int i = s.length() ; i >= 0 ; i-- ){
        if( dem == 3){
            s.insert(i,1,',');
            dem = 0 ;
            i++;
        }
        else dem++;
    }
    if( s[0] == ',' ) s.erase(0,1);
    cout << s;
}
