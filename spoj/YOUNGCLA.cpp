#include<bits/stdc++.h>
using namespace std;
struct Person{
    string name;
    int day;
    int month;
    int year;
    int time;
};
bool check(Person a,Person b){
    return a.time > b.time;
}
int main(){
    int n;
    cin >> n;
    Person p[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> p[i].name >> p[i].day >> p[i].month >> p[i].year;
        p[i].time = p[i].day + p[i].month*30 + p[i].year*365;
    }
    sort(p,p+n,check);
    cout << p[0].name << endl;
    cout << p[n-1].name << endl;
} 
