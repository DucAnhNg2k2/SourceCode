#include<bits/stdc++.h>
using namespace std;


string hieu(string a,string b)
{
	while( a.size() < b.size() ) a = '0' + a  ;
	while( b.size() < a.size() ) b = '0' + b  ;
	if( a < b ) swap(a,b) ;
	if( a == b ) return "0" ;
	int nho = 0 ;
	string res = "" ;
	for(int i = a.size()-1 ; i >= 0 ; i--) 
	{
		int so = (int)(a[i]-'0')-(int)(b[i]-'0')-nho;
		if( so < 0 )
		{
			so += 10 ;
			nho = 1 ;
		}
		else nho = 0 ;
		res = (char)(so+'0') + res ;
	}
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
    	cout << hieu(a,b) << endl;
	}
} 

