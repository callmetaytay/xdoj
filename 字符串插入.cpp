#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ss,s;
	getline(cin,ss);
	getline(cin,s);
	int n;
	cin>>n;
	ss.insert(n,s);
	cout<<ss;
}

