#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double s;
	int t;
	cin>>s>>t;
	double money=0;
	if(s<=3.0)money=10.0;
	else if(s>3.0&&s<=10.0)money=10.0+(s-3.0)*2.0;
	else money=24.0+(s-10.0)*3.0;
	money+=(t/5)*2;
	cout<<fixed<<setprecision(1)<<money;
}
