#include<iostream>
#include<math.h>
using namespace std;
int num[2100];
int main()
{
	int n;
	cin>>n;
	int averagenum=0;
	for(int i=0;i<n;i++){
		cin>>num[i];
		averagenum+=num[i];
	}
	averagenum/=n;
	int result=0;
	for(int i=0;i<n;i++){
		result+=pow(num[i]-averagenum,2);
	}
	cout<<result/n;
}
