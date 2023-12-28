#include<iostream>
#include<algorithm>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	double x;
	cin>>n>>x;
	double ret=0;
	double temp;
	for(int i=1;i<=n;i++){
		temp=(-1)*pow(-1,i)*pow(x,i*2-1);
		for(int j=1;j<=i*2-1;j++){
			temp/=j;
		}
		ret+=temp;
	}
	cout<<fixed<<setprecision(4)<<ret;
}
