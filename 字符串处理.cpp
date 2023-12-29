#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int sum=0;
	bool flag=false;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			sum+=s[i]-'0'+0;
			flag=true;
		}
		else if(s[i]>='a'&&s[i]<='f'){
			sum+=s[i]+10-'a';
			flag=true;
		}
	}
	if(flag==false)cout<<"NO";
	else cout<<sum;
 } 
