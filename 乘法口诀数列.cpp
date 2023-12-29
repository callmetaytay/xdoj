#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a1,a2,n;
	cin>>a1>>a2>>n;
	vector<int>num(2);
	num[0]=a1,num[1]=a2;
	int count=2;
	int i=1;
	while(count<=n){
		int t=num[i]*num[i-1];
		if(t<10){
			num.push_back(t);
			count++;
		}
		else {
			num.push_back(t/10);
			num.push_back(t%10);
			count+=2;
		}
		i++;
	}
	for(int i=0;i<n;i++){
		cout<<num[i]<<' ';
	}
}
