#include<iostream>
#include<vector> 
using namespace std;

int main()
{
	int  n;
	cin>>n;
	vector<int>num(n);
		int max=0,min=10000;
	for(int i=0;i<n;i++){
		cin>>num[i];
		if(num[i]>max)max=num[i];
		if(num[i]<min)min=num[i];
	}
	for(int i=0;i<n;i++){
		if(num[i]==max){
			int t=num[n-1];
			num[n-1]=num[i];
			num[i]=t;
		}
		if(num[i]==min){
			int t=num[0];
			num[0]=num[i];
			num[i]=t;
		}
	}
	for(int i=0;i<n;i++){
		cout<<num[i]<<' ';
	}
}
