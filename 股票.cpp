#include<iostream>
using namespace std;
int main()
{
	int m,p,n;
	cin>>m>>p>>n;
	int ticket=m;
	int money=0;
	int k,d;
	for(int i=0;i<n;i++)
	{
		cin>>k>>d;
		ticket+=k;
		money-=k*d;
	}
	cout<<money+ticket*d;
}
