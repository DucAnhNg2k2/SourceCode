#include<bits/stdc++.h>
using namespace std;
int main(){
    int cs = 1;
    while(true){
        string s1,s2;
        cin >> s1 >> s2;
        if( s1 =="END" && s2 == "END" ) break;
        vector<int> a(300,0);
        vector<int> b(300,0);
        for(int i = 0 ; i < s1.length() ; i++ ){
            a[s1[i]]++;
        }
        for(int i = 0 ; i < s2.length() ; i++ ){
            b[s2[i]]++;
        }
        bool oke = true;
        for(int i = 0 ; i < 300 ; i++ ){
            if( a[i] != b[i] ){
                oke = false;
                break;
            }
        }
        cout << "Case " << cs << ": ";
        cs++;
        if( oke ) cout <<"same" << endl;
        else cout << "different" << endl;
    }
} 
