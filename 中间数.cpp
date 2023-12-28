#include<iostream>
using namespace std;
int num[1010];
void sort(int l,int r,int num[]){
	int mid=num[(l+r)/2];
	int i=l-1,j=r+1;
	while(i<j){
		do i++;while(num[i]<mid);
		do j--;while(num[j]>mid);
		if(i<j)swap(num[i],num[j]);
	}
	if(l<j)sort(l,j,num);
	if(j+1<r)sort(j+1,r,num);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>num[i];
	sort(0,n-1,num);
	int mid=num[n/2];
	int count1=0,count2=0;
	for(int i=0;i<n;i++){
		if(num[i]<mid)count1++;
		else if(num[i]>mid)count2++;
	}
	if(count1==count2)cout<<mid;
	else cout<<"-1";
}
