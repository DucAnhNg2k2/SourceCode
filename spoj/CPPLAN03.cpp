#include<iostream>
#include<math.h>
using namespace std;
 
string Hieu(string a,string b);
string Tong(string a,string b)
{	
	if( a[0] =='-' && b[0] =='-')
	{
		a.erase(0,1); b.erase(0,1);
		return '-' + Tong(a,b);
	}
	if( a[0] =='-')
	{
		a.erase(0,1);
		return Hieu(b,a);
	}
	if( b[0] =='-')
	{
		b.erase(0,1);
		return Hieu(a,b);
	}
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
string Hieu(string a,string b)
{	
	if( a[0] =='-' && b[0] == '-')
	{
		a.erase(0,1); b.erase(0,1);
		return Hieu(b,a);
	}
	if( a[0] =='-')
	{	
		a.erase(0,1);
		return '-' + Tong(a,b);
	}
	if( b[0] =='-')
	{
		b.erase(0,1);
		return Tong(a,b);	
	}
	if( a == b ) return "0";
	string res = "";
	while( a.size() < b.size() ) a = '0' + a;
	while( b.size() < a.size() ) b = '0' + b;
	bool okMin = false ;
	if ( a < b )
	{
		swap(a,b);
		okMin = true;
	}
	int nho = 0 ;
	for(int i = a.size()-1 ; i >= 0 ; i-- )
	{
		int so = (int)(a[i]-'0') - (int)(b[i]-'0') - nho ;
		if( so < 0 )
		{
			so += 10 ;
			nho = 1;
		}
		else nho = 0 ;
		res = (char)(so+'0') + res ;
	}
	while( res[0] == '0' ) res.erase(0,1);
	if( okMin ) res = '-' + res ;
	return res;
}
string Tich(string x,string y)
{	
	// ki�?m tra dấu trừ 
	if( x[0] == '-' && y[0] == '-')
	{
		x.erase(0,1); y.erase(0,1);
		return Tich(x,y);
	} 
	if( x[0] == '-')
	{
		x.erase(0,1);
		return '-' + Tich(x,y);
	}
	if( y[0] =='-')
	{
		y.erase(0,1);
		return '-' + Tich(x,y);
	}
	if( x.size()%2 == 1 ) x = '0' + x;
	if( y.size()%2 == 1 ) y = '0' + y;
	while( x.size() < y.size() ) x = '0' + x;
	while( y.size() < x.size() ) y = '0' + y;
	int n = x.length();
	if( n == 2 )
	{
		int sum1 = (int)(x[0]-'0')*10 + (int)(x[1]-'0');
		int sum2 = (int)(y[0]-'0')*10 + (int)(y[1]-'0');
		return to_string(sum1*sum2);
	}
	string pow10n2 = "";
	string a="",b="",c="",d="";
	for(int i = 0 ; i < n/2 ; i++ )
	{
		a = a + x[i];
		c = c + y[i];
		pow10n2 += "0";
	}
	for(int i = n/2 ; i < n ; i++ )
	{
		b = b + x[i];
		d = d + y[i];
	}
//	X*Y = (a*c)*10^n + [(a-b)*(d-c) + ac + bd ]*10^n/2 + bd 
 
	string temp1 = Tich(a,c);
	string temp2 = Tich(b,d);
	string c1 = Hieu(a,b) , c2 = Hieu(d,c);
	string temp3 = Tich(c1,c2);
 
	string s1 = temp1 + pow10n2 + pow10n2 ;
	string s2 = Tong(temp1,Tong(temp2,temp3)) + pow10n2 ;
	string s3 = temp2;
 
	string res = Tong(s1,Tong(s2,s3));
	while( res[0] =='0' && res.size() > 1 ) res.erase(0,1);
	return res;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		string s1,s2;
		cin >> s1 >> s2;
		cout << Tich(s1,s2) << '\n';
	}
}
