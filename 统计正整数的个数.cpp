#include<iostream>
using namespace std;
int num[100000];
int main()
{
	int n;
	cin>>n;
	int number;
	for(int i=0;i<n;i++){
		cin>>number;
		num[number]++;
	}
	for(int i=0;i<100000;i++){
		if(num[i]==0)continue;
		else cout<<i<<':'<<num[i]<<endl;
	}
}
