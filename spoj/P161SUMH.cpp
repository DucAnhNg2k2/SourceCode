// FORM 
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
char s[100][100];
int main()
{
   ios_base::sync_with_stdio(0);
//   	cin.tie(0);
   	int n;
    cin >> n;
    FORR(i,0,100){
        FORR(j,0,100){
            s[i][j] = '.';
        }
    }
    FORR(i,1,n+1){
        FORR(j,1,n+1){
            cin >> s[i][j];
        }
    }
    bool ok = true ;
    FORR(i,1,n+1){
        FORR(j,1,n+1){
            int dem = 0 ;
            if( s[i-1][j] == 'o') dem++;
            if( s[i][j+1] =='o' ) dem++;
            if( s[i][j-1] =='o') dem++;
            if( s[i+1][j] =='o' ) dem++; 
            if( dem%2 != 0 ){
            ok = false ;
            break;
            }
        }
        if( ok == false ) break;
    }
    if( ok ) cout << "YES";
    else cout <<"NO";
}     
