#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> num(n,0);
	int max=-110,min=110;
	int maxplace=0,minplace=0;
	for(int i=0;i<n;i++){
		cin>>num[i];
		if(num[i]>max){
			max=num[i];
			maxplace=i;
		}
	}
	swap(num[maxplace],num[0]);
	for(int i=0;i<n;i++){
		if(num[i]<min){
			min=num[i];
			minplace=i;
		}
	}
	swap(num[minplace],num[n-1]);
	for(int i=0;i<n;i++){
		cout<<num[i]<<' ';
	}
}
