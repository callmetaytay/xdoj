#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
	string s,ss;
	getline(cin,s);
	getline(cin,ss);
	string word;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int count=0;
	stringstream ss_s(s);
	while(ss_s>>word){
		if(word==ss)count++;
	}
	cout<<ss<<' '<<count;
}
