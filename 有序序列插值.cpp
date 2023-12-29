#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>num(35,10000);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int m;
	cin>>m;
	num.push_back(m);
	sort(num.begin(),num.end());
	for(int i=0;i<=n;i++){
		cout<<num[i]<<' ';
	}
}
