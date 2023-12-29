#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int max=0;
	int count=0;
	for(int i=0;i<n-1;i++){
		if(num[i]==num[i+1]){
			count++;
			if(max<count)max=count;
		}
		else count=0; 
	}
	cout<<max+1;
}
