#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ss,s;
	getline(cin,ss);
	getline(cin,s);
	if(ss.find(s)==string::npos)cout<<"NO!";
	else cout<<ss.find(s)+1;
}
