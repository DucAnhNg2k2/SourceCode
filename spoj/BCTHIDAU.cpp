#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Student{
    string name;
    ll Diem;
    ll Time;
};
int main(){
    int n;
    cin >> n;
    Student s[n];
    ll maxDiem = 0 ;
    ll minTime = 1e9;
    ll cs;
    for(int i = 0 ; i < n ; i++ ){
    	int dem = 0 ;
    	ll sum = 0 ;
    	ll a1,b1,a2,b2,a3,b3,a4,b4;
    	cin >> s[i].name >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
    	if( b1 == 0 ) sum +=0;
    	else{
    		dem++;
    		sum = sum + (a1-1)*20 + b1;
		}
		if( b2 == 0 ) sum += 0 ;
		else{
			dem++;
			sum = sum + (a2-1)*20 + b2;
		}
		if( b3 == 0 ) sum += 0 ;
		else{
			dem++;
			sum = sum + (a3-1)*20 + b3;
		}
		if( b4 == 0 ) sum += 0;
		else{
			dem++;
			sum = sum + (a4-1)*20 + b4;
		}
		s[i].Diem = dem;
		s[i].Time = sum;
		if( maxDiem <= s[i].Diem ){
			if( minTime >= s[i].Time ){
				maxDiem = s[i].Diem;
				minTime = s[i].Time;
				cs = i;
			}
		}
	}
	cout << s[cs].name << ' ' << s[cs].Diem << ' ' << s[cs].Time;
} 
