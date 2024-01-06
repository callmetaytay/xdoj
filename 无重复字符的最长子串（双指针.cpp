#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int max=0;
	int left=0,right=1;
	vector<char> temp;
	temp.push_back(s[0]);
	int count=1;
	int flag=0;
	while(right<s.length()){
		int x=0;
		for(int t=0;t<count;t++){
			if(s[right]==temp[t]){
				flag=1;
				x=t;//这个x是重复元素在temp中的位置，不是在整个字符串中的位置 
				break;
			}
		}
		if(flag==0){
			temp.push_back(s[right]);
			count++;
		}
		else{
			if(count>max)max=count;
			temp.push_back(s[right]);
			temp.erase(temp.begin(),temp.begin()+x+1);
			count=right-left-x;
			left=left+x+1; 
			flag=0;
		}
		right++;
	}
	if(count>max)max=count;
	cout<<max;
}
