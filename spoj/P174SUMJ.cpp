#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<set<int> > s;
    for(int i = 0 ; i < n ; i++ ){
        int d;
        cin >> d;
        bool check = true;
        for(int j = 0 ; j < s.size() ; j++ ){
        	if( s[j].find(d) == s[j].end() ){
                s[j].insert(d);
                check = false;
                break;
            }
		}
        if( check ){
            s.resize(s.size()+1);
            int n = s.size();
            s[n-1].insert(d);
        }
    }
    int dem = 0 ;
    for(int i = 0 ; i < s.size() ; i++ ){
        dem += s[i].size() - 1;
    }
    cout << dem;
}
 
