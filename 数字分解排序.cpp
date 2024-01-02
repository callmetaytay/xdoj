#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	string num;
	cin>>num;
	vector<int>number(num.length());
	for(int i=0;i<num.length();i++){
		number[i]=num[i]-'0';
	}
	sort(number.begin(),number.end());
	for(int i=num.length()-1;i>=0;i--){
		cout<<number[i]<<' ';
	}
}
