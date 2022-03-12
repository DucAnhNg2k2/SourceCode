#include<iostream>
#include<math.h>
using namespace std;
/*

d?t	X = a*10^n/2 + b 
d?t	Y = c*10^n/2 + d 

 X*Y = (a*10^n/2 + b)*(c*10^n/2 + d)
 X*Y = (a*c)*10^n + (a*d+b*c)*10^n/2 + (b*d)
 th?c hi?n 4 phép nhân các s? nguyên có n/2 cs : a*c  , a*d , b*c , b*d 
 th?c hi?n 3 phép c?ng 
 th?c hi?n 2 phép nhân v?i 10^n và 10^n/2 t?n O(n) d?ch trái n l?n 
--> O(n^2)

*/
long long To_int(string a)
{
	long long s = 0 ;
	for(int i = 0 ; i < a.length() ; i++ )
	{
		s = s*10 + (int)(a[i]-'0');
	}
	return s;
}

string Tong(string a,string b)
{	string res = "";
	while( a.size() < b.size() ) a = '0' + a;
	while( a.size() > b.size() ) b = '0' + b;
	int nho = 0 ;
	for(int i = a.size()-1 ; i >= 0 ; i-- )
	{
		int so = (int)(a[i]-'0') + (int)(b[i]-'0') + nho ;
		res = (char)(so%10+'0') + res ;
		if( so >= 10 ) nho = 1;
		else nho = 0 ;
	}
	if( nho == 1 ) res = '1' + res ;
	return res;
}

string Tich(string x,string y)
{
	if( x.size()%2 == 1 ) x = '0' + x;
	if( y.size()%2 == 1 ) y = '0' + y;
	while( x.size() < y.size() ) x = '0' + x;
	while( y.size() < x.size() ) y = '0' + y;
	int n = x.length();
	if( n == 2 )
	{
		long long sum1 = To_int(x);
		long long sum2 = To_int(y);
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
	string temp1 = Tich(a,c);
	string temp2 = Tich(a,d);
	string temp3 = Tich(b,c);
	string temp4 = Tich(b,d);

	string s1 = temp1 + pow10n2 + pow10n2 ;
	string s2 = Tong(temp2,temp3) + pow10n2 ;
	string s3 = temp4 ;
	return Tong(s1,Tong(s2,s3));
}
long long NhiPhan(string s)
{
	long long sum = 0 ;
	int dem = 0 ;
	for(int i = s.size()-1 ; i >= 0 ; i-- )
	{
		sum += (int)(s[i]-'0')*pow(2,dem);
		dem++;
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		string s1,s2;
		cin >> s1 >> s2;
		s1 = to_string(NhiPhan(s1));
		s2 = to_string(NhiPhan(s2));
		string res = Tich(s1,s2);
		while( res[0] == '0' && res.size() > 1 ) res.erase(0,1);
		cout << res << endl;
	}
}






