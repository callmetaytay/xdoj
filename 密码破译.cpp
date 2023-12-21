#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(isupper(s[i]+=4)){
			s[i]=(s[i]-'A')%26+'A';
		}
		else {
			s[i]=(s[i]-'a')%26+'a';
		}
	}
	cout<<s;
}
