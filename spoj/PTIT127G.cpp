#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Xau{
    string x;
};
bool check(Xau a,Xau b){
    while( a.x.size() < b.x.size() ) a.x = '0' + a.x;
    while( b.x.size() < a.x.size() ) b.x = '0' + b.x;
    return a.x < b.x;
}
int main(){
    ios_base::sync_with_stdio(false);
    Xau SX[10000];
    int size = 0 ;
    int t;
    cin >> t;
    vector<string> v;
    while( t-- ){
        string s ;
        cin >> s ;
        for (int i = 0 ; i<s.length() ; i++){
 
            if ( '0' <= s[i] && s[i] <= '9'){
                string res="";
                for (int j=i; j<s.length(); j++)
                {
                    i=j;
                    if ('9'<s[j] || s[j]<'0') break;
                    else res+=s[j];
                }
                while( res.length() > 1 && res[0] =='0') res.erase(0,1);
                SX[size].x= res;
                size++;
            }
        }
    }
    sort(SX,SX+size,check);
    for(int i = 0 ; i < size ; i++ ){
        cout << SX[i].x << endl;
    }
} 
