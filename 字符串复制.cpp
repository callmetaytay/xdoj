#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int m;
	cin>>m;
	if(m>=str.length()){
		cout<<"error";
		return 0;
	}
	else {
		cout<<str.substr(m-1); 
	}
}
