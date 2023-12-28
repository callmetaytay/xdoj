#include<iostream>
#include<iomanip>
using namespace std;
double legendre(double x,int i){
	if(i==0)return 1.0;
	else if(i==1)return x;
	else return (2*i-1)*x*legendre(x,i-1)/i-(i-1)*legendre(x,i-2)/i;
}
int main()
{
	int n;
	double x;
	cin>>n>>x;
	double result=0.0;
	for(int i=1;i<=n;i++){
		result+=legendre(x,i);
	}
	cout<<fixed<<setprecision(4)<<result; 
}
