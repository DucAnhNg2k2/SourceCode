#include<bits/stdc++.h>
using namespace std;
 
string Tong(string a,string b)
{	
	
	string res = "";
	while( a.size() < b.size() ) a = '0' + a;
	while( a.size() > b.size() ) b = '0' + b;
	int nho = 0 ;
	for(int i = a.size()-1 ; i >= 0 ; i-- )
	{
		int so = (int)(a[i]-'0') + (int)(b[i]-'0') + nho ;
		if( so >= 10 ) nho = 1;
		else nho = 0 ;
		res = (char)(so%10+'0') + res ;
	}
	if( nho == 1 ) res = '1' + res ;
	return res;
}
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s;
	while( cin >> s )
	{
		set<string> res ; res.insert(s);
		string temp = s ; int n = s.size() ;
		for(int i = 1 ; i < n ; i++ )
		{
			temp = temp +  temp[0];
			temp.erase(0,1);
			res.insert(temp);
		}
		bool ok = true ; temp = "0";
		for(int i = 1 ; i <= n ; i++ )
		{
			temp = Tong(temp,s);
			if( res.find(temp) == res.end() )
			{
				ok = false;
				cout << s << " is not cyclic\n";
				break;
			}
		}
		if( ok ) cout << s << " is cyclic\n";
	
