#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int>num;
	int i=0;
	int count=0;
	while(i<s.length()){
		if(isdigit(s[i])){
			int t=0;
			while(isdigit(s[i])){
			t=t*10+s[i]-'0';
			i++;
		}
		num.push_back(t);
		count++;
		}
		i++;
	}
	sort(num.begin(),num.end());
	for(int j=count-1;j>=0;j--){
		cout<<num[j]<<' ';
	}
}
