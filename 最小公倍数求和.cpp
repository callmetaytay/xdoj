#include<iostream>
#include<vector>
using namespace std;
int lowestcommonmultiple(int low,int up){
	if(low>up)swap(low,up);
	int i=1;
	for( i=up;i<=low*up;i++){
		if(i%up==0&&i%low==0)break;
	}
	return i;
}
int main()
{
	int n;
	cin>>n;
	vector<int>num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int sum=0;
	for(int i=0;i<n-1;i++){
		sum+=lowestcommonmultiple(num[i],num[i+1]);
	}
	cout<<sum;
}
