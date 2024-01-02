#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isprime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main()
{
	string s;
	getline(cin,s);
	int num=0;
	vector<int>number(100000);
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			num=num*10+s[i]-'0';
		}
	}
	int flag=0;
	if(num==0){
		cout<<'0';
		return 0;
	}
	else {
		for(int i=2;i<num;i++){
			if(isprime(i)&&num%i==0){
				flag=1;
				number.push_back(i);
			}
		}
		if(flag==0)cout<<num;
		else{
			cout<<*max_element(number.begin(),number.end());
		}
	}
}
