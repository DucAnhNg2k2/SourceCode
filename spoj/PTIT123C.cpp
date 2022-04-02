#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Card{
	int cs;
	int data;
};
typedef Card C;
bool cmp1(C a,C b){
	if( a.data < b.data ) return true;
	else if( a.data == b.data ){
		if( a.cs < b.cs ) return true;
	}
	return false;
}
bool cmp2(C a,C b){
	if( a.cs < b.cs ) return true;
	return false;
}
bool cmp3(C a,C b){
	if( a.cs > b.cs ) return true;
	return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n , k1, k2;
    int cs = 1;
    while(true){
        cin >> n >> k1 >> k2;
        if( n == 0 && k1 == 0 ) break;
       	Card c[n+1];
       	for(int i = 1 ; i <= n ; i++ ){
       		cin >> c[i].data;
       		c[i].cs = i;
		}
		cout << "Case " << cs << '\n'; cs++;
		sort(c+1,c+n+1,cmp1);
		sort(c+1,c+k1+1,cmp2);
		sort(c+n+1-k2,c+n+1,cmp3);
		for(int i = 1 ; i<= k1 ; i++ ){
			cout << c[i].cs << ' ';
		}
		cout << '\n';
		for(int i = n - k2 +1 ; i <= n ; i++ ){
			cout << c[i].cs << ' ';
		}
		cout<< '\n';
    }
} 
