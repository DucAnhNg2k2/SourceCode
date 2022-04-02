#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<set>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s1 , s2 ;
    cin >> s1 >> s2;
    int dem = 0 ;
    FOR(0,n){
    	int so1 = (int)(s1[i]-'0');
    	int so2 = (int)(s2[i]-'0');
    	int kc = abs(so1-so2);
    	dem += min(kc,10-kc);
	}
	cout << dem ;
} 
