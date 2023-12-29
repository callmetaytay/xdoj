#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int num[110];
int space[110];
void quick_sort(int num[],int space[],int l,int r){
	if(l>=r)return;
		int mid=num[(l+r)/2];
		int i=l-1,j=r+1;
		while(i<j){
			do i++;while(num[i]<mid);
			do j--;while(num[j]>mid);
			if(i<j){
				swap(num[i],num[j]);
				swap(space[i],space[j]);
			}
		}
		quick_sort(num,space,l,j);
		quick_sort(num,space,j+1,r);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
		space[i]=i+1;
	}

	quick_sort(num,space,0,n-1);
	int max=0,min=80000;
	bool judge=true;
	for(int i=1;i<n-1;i++){
		if(num[i]-num[i-1]!=num[i+1]-num[i]){
			judge=false;
			break;
		}
	}
    if(judge){
    	for(int i=0;i<n;i++){
    		cout<<space[i]<<' ';
		}
	}
	else{
		for(int i=0;i<n-1;i++){
			int t=num[i+1]-num[i];
			if(t>max)max=t;
			if(t<min)min=t;
		}
		cout<<max<<' '<<min;
	}
}


