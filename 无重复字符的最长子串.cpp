#include<iostream>
#include<string>
using namespace std;
int dp[50000];
int main()
{
	string s;
	getline(cin,s);//可能包含空格，用getline 
	int x=0,i=0,j=0;
	do{
		string ss;
		ss.assign(s,i,j-i);
		size_t found=ss.find(s[j]);
		if(found==std::string::npos){
			dp[x]=ss.length()+1;
			x++;
			j++;
		}
		else {
			i++;
		}
	}while(i<s.length()&&j<s.length());
	int max=dp[0];
	for(int t=0;t<x;t++){
		if(max<dp[t])max=dp[t];
	}
	cout<<max;
}
