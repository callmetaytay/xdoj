#include<iostream>
#include<vector>
#include<string>
using namespace std;
int minloads(vector<vector<int> >&arr){
	int line=arr.size();
	int row=arr[0].size();
	vector<vector<int> > dp(line,vector<int>(row,0));
	dp[0][0]=arr[0][0];
	for(int i=1;i<row;i++){
		dp[0][i]=arr[0][i]+dp[0][i-1];
	}
	for(int j=1;j<line;j++){
		dp[j][0]=arr[j][0]+dp[j-1][0];
	}
	for(int i=1;i<line;i++){
		for(int j=1;j<row;j++){
			dp[i][j]=arr[i][j]+min(dp[i-1][j],dp[i][j-1]); 
		}
	}
	return dp[line-1][row-1];
}
int main()
{
	string s;
	getline(cin,s);
	vector<vector<int> > arr;
	vector<int> rows;
	for(int k=0;k<s.length();k++){
		if(isdigit(s[k])){
			int x=s[k]-'0';
			rows.push_back(x);
		}
		else if(s[k]==']'&&s[k+1]!=']'){
			arr.push_back(rows);
			rows.clear(); 
		}
    }
    
	cout<<minloads(arr);
}
