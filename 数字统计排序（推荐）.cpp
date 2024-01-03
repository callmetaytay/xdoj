#include<iostream>
using namespace std;
int arr[1000];
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		int x;
		cin>>x;
		arr[x]++;
	}
	for(i=1000;i>0;i--){
		for(j=0;j<=1000;j++){
			if(arr[j]==i){
				cout<<j<<' '<<arr[j]<<endl;
			}
		}
	}
	return 0;
}
