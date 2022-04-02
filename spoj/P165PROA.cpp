#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
struct Kitu{
	char s;
	int vitri;
};
 
bool cmp(Kitu a,Kitu b){
	if( a.s > b.s ) return true;
	if( a.s == b.s ){
		return a.vitri < b.vitri ;
	} 
	return false;
}
char s[1000000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    scanf("%s",&s);
    int n = strlen(s);
    Kitu p[n];
    FOR(0,n){
    	p[i].s = s[i];
    	p[i].vitri = i;
	}
	sort(p,p+n,cmp);
	string res = "";
	int dem = -1 ;
	FOR(0,n){
		if( dem < p[i].vitri ){
			dem = p[i].vitri ;
			res += p[i].s ;
		}
	}
	cout << res ; 
} 
 
// https://www.spoj.com/PTIT/problems/P165PROA/ 
 
