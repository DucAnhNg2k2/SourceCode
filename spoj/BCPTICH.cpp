#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll test,n;
   cin >> test >> n;
   int dem = 0;
   for(ll i = 2 ; i <= sqrt(2*n) ; i++ ){
       if( (2*n)%i == 0 ){
            ll T = (i+1) - (2*n)/i;
            if( T%2 == 0 ) dem++; 
       }
   }
   cout << test << " " << dem << endl;
}
int main(){
    //  sum l - > r == l + (l+1) + (l+2) + (l+3) + (l+4) + (l+5) + .... + (r-1)+ r
    
    /*  --> sum = n*(l+r)/2 = (r-l+1)*(r+l)/2 == n
        --> (r-l+1)*(r+l) == 2*n
    */
 
   /*  r-l+1 = (2*n) / (r+l) mÃ?Â  r-l+1 nguyÃ?Âªn --> (2*n) % (r+l) == 0
    
    Ã?â??Ã¡ÂºÂ·t r+l = i 
     --> r-l+1 = (2*n) /i 
     --> r+l+1 - 2l = (2*n)/i
     --> 2l = (i+1) - (2*n)/i
     mÃ?Â  l nguyÃ?Âªn --> (i+1) - (2*n)/i mod 2 == 0
   */
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
