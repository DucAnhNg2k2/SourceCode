#include<bits/stdc++.h>
using namespace std;
int main(){
    int m , n , k;
    cin >> m >> n >> k;
    // tong so nguoi la m + n
    // tong so nguoi ghep doi la m + n - k
    int NamOut;
    int Nu;
    int Nam;
    int max = 0 ;
    for(int NuOut = 0 ; NuOut <= k ; NuOut++){
        NamOut = k - NuOut;
        Nu = m - NuOut;
        Nam = n - NamOut;
        if( max < min(Nu/2,Nam) ) max = min(Nu/2,Nam);
    }
    cout << max;
} 
