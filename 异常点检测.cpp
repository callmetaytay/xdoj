#include<iostream>
#include<iomanip>
#include<vector> 
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<double>num(n);
	double sum=0.0;
	for(int i=0;i<n;i++){
		cin>>num[i];
		sum+=num[i];
	}
	double average=sum/(double)n;
	double s;
	sum=0.0;
	for(int i=0;i<n;i++){
		sum+=(num[i]-average)*(num[i]-average);
	}
	s=sqrt(sum/(n-1.0));
	int count=0;
	for(int i=0;i<n;i++){
		if(num[i]>average+s*3||num[i]<average-s*3)count++;
	}
	cout<<fixed<<setprecision(4)<<s<<' '<<count;
} 
