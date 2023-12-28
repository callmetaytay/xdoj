#include<iostream>
using namespace std;
int num[55];
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int max=0,min=100000,x=0,y=0;
	for(int i=0;i<n;i++){
		cin>>num[i];
		sum+=num[i];
		if(num[i]>max){
			max=num[i];
			x=i+1;
		}
		if(num[i]<min){
			min=num[i];
			y=i+1;
		}
	}
	cout<<sum<<' '<<max<<' '<<x<<' '<<min<<' '<<y;
}
