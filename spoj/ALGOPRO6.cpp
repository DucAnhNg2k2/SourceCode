#include<bits/stdc++.h>
using namespace std;
struct Date{
	int d;
	int m;
	int y;
};
bool nam_nhuan(int year)
{
    if (year % 100 == 0)
     
    {
        if (year % 400 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    else if (year % 4 == 0) {
        return true;
    }
    else{
        return false;
    }
}
int tong(int n){
	int sum = 0 ;
	while( n > 0 ){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int main(){
	long long sum = 0;
	int n;
	cin >> n;
	Date d;
	//1
	for(int i = 1 ; i <=31 ; i++ ){
		d.d =i;
		d.m = 1;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//3
	for(int i = 1 ; i <=31 ; i++ ){
		d.d =i;
		d.m = 3;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//5
	for(int i = 1 ; i <=31 ; i++ ){
		d.d =i;
		d.m = 5;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//7
	for(int i = 1 ; i <=31 ; i++ ){
		d.d =i;
		d.m = 7;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//8
	for(int i = 1 ; i <=31 ; i++ ){
		d.d =i;
		d.m = 8;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//10
	for(int i = 1 ; i <=31 ; i++ ){
		d.d =i;
		d.m = 10;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//12
	for(int i = 1 ; i <=31 ; i++ ){
		d.d =i;
		d.m = 12;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}
	//4
	for(int i = 1 ; i <=30 ; i++ ){
		d.d =i;
		d.m = 4;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}		
	//6
	for(int i = 1 ; i <=30 ; i++ ){
		d.d =i;
		d.m = 6;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//9
	for(int i = 1 ; i <=30 ; i++ ){
		d.d =i;
		d.m = 9;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//11
	for(int i = 1 ; i <=30 ; i++ ){
		d.d =i;
		d.m = 11;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	//2
	for(int i = 1 ; i <=28 ; i++ ){
		d.d =i;
		d.m = 2;
		d.y = n;
		sum = sum + tong(d.d) + tong(d.m) + tong(d.y);
	}	
	bool check = nam_nhuan(n);
	if( check ) sum = sum + tong(29) + tong(2) + tong(n);
	cout << sum;
} 
