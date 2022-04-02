#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string ChuyenVe3(ll a){
    stack<int> st;
    while( a > 0 ){
        st.push(a%3);
         a/=3;
    }
    string res="";
    while( !st.empty() ){
        res += (char)(st.top()+'0');
        st.pop();
    }
    return res;
}
string TinhToan(string c,string a){
    while( a.size() < c.size() ) a = '0' + a;
    while( c.size() < a.size() ) c = '0' + c;
    string res ="";
    for(int i = a.size() - 1 ; i >=0 ; i-- ){
        int so;
        int so1 = (int)(c[i]-'0');
        int so2 = (int)(a[i]-'0');
        if( so1 >= so2 ) so = so1-so2;
        else so = so1 + 3 - so2;
        res = (char)(so+'0') + res;
    }
    return res;
}
int main(){
    ll a , c;
    cin >> a >> c;
    string A = ChuyenVe3(a);
    string C = ChuyenVe3(c);
    string B = TinhToan(C,A);
    int dem = 0 ;
    ll sum = 0;
    for(int i = B.length() -1  ; i >= 0 ; i-- ){
        int t = (int)(B[i]-'0')*pow(3,dem);
        dem++;
        sum += t;
    }
    cout << sum;
} 
