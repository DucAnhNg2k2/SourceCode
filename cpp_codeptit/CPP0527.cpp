#include<bits/stdc++.h>
using namespace std;
struct thoigian{
	long long gio,phut,giay;
};
void nhapmot(thoigian &t){
	cin>>t.gio>>t.phut>>t.giay;
}
void nhap(thoigian t[],int n){
	for(int i=0;i<n;i++) nhapmot(t[i]);
}
bool cmp(thoigian a,thoigian b)
{
	if( a.gio < b.gio ) return true ;
	else if( a.gio == b.gio )
	{
		if( a.phut < b.phut ) return true ;
		else if( a.phut == b.phut )
		{
			if( a.giay < b.giay ) return true ;
			return false;
		}
		else return false;
	}
	else return false ;
}
void in(thoigian t[],int n){
	sort(t,t+n,cmp);
	for(int i=0;i<n;i++){
		cout<<t[i].gio<<" "<<t[i].phut<<" "<<t[i].giay<<endl;
	}
}
int main(){
	long long n;
	cin>>n;
	thoigian ds[10000];
	nhap(ds,n);
	in(ds,n);
}
