#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> number(1010,0);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		number[x]=1;
	}
	for(int i=0;i<=1000;i++){
		if(number[i]==1)cout<<i<<' ';
	}
}
