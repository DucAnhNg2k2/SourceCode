#include<bits/stdc++.h>
using namespace std;


string cong(string a,string b)
{
	while( a.size() < b.size() ) a = '0' + a  ;
	while( b.size() < a.size() ) b = '0' + b  ;
	string res = "" ;
	int nho = 0 ;
	for(int i = a.size()-1 ; i >= 0 ; i--) 
	{
		int so = (int)(a[i]-'0')+(int)(b[i]-'0')+nho;
		res = (char)(so%10+'0') + res ;
		if( so >= 10 ) nho = 1 ;
		else nho = 0 ;
	}
	if( nho == 1 ) res = "1" + res ;
	return res ;
}

int main()
{
	ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- )
    {
    	string a , b;
    	cin >> a >> b ;
    	cout << cong(a,b) << endl;
	}
} 

