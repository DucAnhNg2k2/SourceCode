#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s[0]=='1' && s[1]=='2' && s[8]=='P'){
        s.erase(s.length()-1,1);
         s.erase(s.length()-1,1);
        cout << s;
        return 0;
    }
    if(s[0]=='1' && s[1]=='2' && s[8]=='A'){
        s.erase(s.length()-1,1);
         s.erase(s.length()-1,1);
         s[0] ='0';
         s[1] ='0';
        cout << s;
        return 0;
    }
    s = '@'+s;
    int so1 = (int)(s[1]-'0');
    int so2 = (int)(s[2]-'0');
    int so = so1*10 + so2;
    if( s[9] =='P') so+=12;
    s[2] = (char)(so%10+'0');
    so/=10;
    s[1] = (char)(so%10+'0');
    s.erase(0,1);
    s.erase(s.length()-1,1);
    s.erase(s.length()-1,1);
    cout << s; 
} 
