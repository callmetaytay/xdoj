#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		while(x>0){
			sum+=x%10;
			x/=10;
		}
	}
	cout<<sum%10;
}
