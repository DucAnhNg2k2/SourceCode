#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string solve(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if( a[2] > 900 ) return "NO";
    if( a[1] > 180 ) return "NO";
    if( a[0] > 145 ) return "NO";
    // Ä?Ä?ng kÃ½ loáº¡i 1
    int sdtloai2conlai = 180 - a[0];
    int sdtloai3conlai = 900 - a[0];
    if( a[1] > sdtloai2conlai ) return "NO";
    if( a[2] > sdtloai3conlai ) return "NO";
    // Ä?Ä?ng kÃ½ loáº¡i 2
    sdtloai3conlai = 900 -a[1] - a[0];
    if( a[2] > sdtloai3conlai ) return "NO";
    return "YES";
}
int main(){
    // cÃ³ 900 sá»? dáº¡ng 3
    // co 180 so dang 2 --> cÃ³ 810 sá»? dáº¡ng 3 ko trÃ¹ng vs 2
    // co 145 so dang 1 --> cÃ³ 35 sá»? dáº¡ng 2 khÃ´ng trÃ¹ng vá»?i 1
    int t;
    cin >> t;
    while( t-- ){
        cout << solve() << endl;
    }
} 
