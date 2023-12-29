#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>num(pow(2,n));
	for(int i=0;i<pow(2,n);i++){
		cin>>num[i];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<pow(2,n);j++){
			num[j]=num[j]+num[pow(2,n)-1-j];
		}
		n--;
	}
	for(int i=0;i<pow(2,n);i++){
		cout<<num[i]<<' ';
	}
}
