#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	s.erase(remove(s.begin(),s.end(),'*'),s.end());
	sort(s.begin(),s.end());
	cout<<s; 
}
