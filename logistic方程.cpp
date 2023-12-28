#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x,r;
	cin>>x>>r;
	int judge=0;
     double x1=x,x2;
	for(int i=2;i<=1000;i++){
		x2=r*x1*(1.0-x1);
		if(fabs(x2-x1)<0.00001){
			judge=1;
			break;
		}
		x1=x2;
	}
	cout<<fixed<<setprecision(4)<<x2<<' '<<judge;
}
