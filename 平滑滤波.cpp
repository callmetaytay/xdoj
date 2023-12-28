#include<iostream>
using namespace std;
int x[35];
int y[35];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>x[i];
	for(int i=0;i<n;i++){
		if(i==0){
			y[i]=x[i]+x[i+1]+x[i+2];
		}
		else if(i==n-1){
			y[i]=x[i]+x[i-1]+x[i-2];
		}
		else y[i]=x[i-1]+x[i]+x[i+1];
		y[i]/=3;
		cout<<y[i]<<' ';
	}
}

