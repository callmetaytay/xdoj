#include<iostream>
using namespace std;
int num[35];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	if(n%2==0){
		for(int i=0;i<n/2;i++){
			int t=num[i];
			num[i]=num[n/2+i];
			num[n/2+i]=t;
		}
	}
	else {
		for(int i=0;i<n/2;i++){
			int t=num[i];
			num[i]=num[n/2+i+1];
			num[n/2+i+1]=t;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<' ';
	}
}
