#include<bits/stdc++.h>
using namespace std;

int main()
{
   ifstream myFile;
   ofstream myFile1;
   myFile.open("PTIT.in");
   myFile1.open("PTIT.out");
   while( !myFile.eof() )
   {
	   string s;
	   getline(myFile,s);
	   myFile1 << s << endl;
   }
   myFile.close();
   myFile.close();
}
