#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	char*p=&str[0],*q=&str[str.size()-1];
	int judge=1;
	for(p,q;p<=q;p++,q--){
		if(*p!=*q){
			judge=0;
			break;
		}
	}
	if(judge==1)cout<<"yes";
	else cout<<"no";
}
