#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
 
struct People{
    string name1 ;
    string name2 ; 
    int age ;
};
 
struct PEOPLE{
	string name;
	int age;
};
 
bool cmp(PEOPLE a,PEOPLE b){
	if( a.age > b.age ) return true;
	if( a.age == b.age ){
		if( a.name < b.name ) return true;
	}
	return false;
}
int cs = 1;
void solve(){
    int n;
    cin >> n;
    map<string,int> m;
    m["Ted"] = 100 ;
    People p[n];
    FOR(0,n) cin >> p[i].name1 >> p[i].name2 >> p[i].age ;
    while( m.size() != n + 1 ){
    	FOR(0,n){
    		string s1 = p[i].name1 ;
    		string s2 = p[i].name2 ;
    		if( m.find(s1) != m.end() ){
    			map<string,int> ::iterator j = m.find(s1) ;
				ll age = (*j).second ;
				m[s2] = age - p[i].age ; 
			}
		}
	}
	map<string,int>::iterator i = m.find("Ted");
	m.erase(i);
	PEOPLE s[n];
	int size = 0;
	for(map<string,int>::iterator i = m.begin() ; i!= m.end() ; i++ )
	{
		s[size].name = (*i).first ;
		s[size].age  = (*i).second ;
		size++ ;
	}		
	sort(s,s+n,cmp);
	cout << "DATASET " << cs << endl;
	cs ++ ;
	FOR(0,size){
		cout << s[i].name << ' ' << s[i].age << endl;
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
