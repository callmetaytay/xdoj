#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void quick_sort(vector<int>&num,vector<int>&place,int l,int r){
    if(l>=r)return;
    int x=num[(l+r)/2],i=l-1,j=r+1;
    while(i<j){
        do i++;while(num[i]<x);
        do j--;while(num[j]>x);
        if(i<j){
		swap(num[i],num[j]);
		swap(place[i],place[j]);	
		}
    }
    quick_sort(num,place,l,j);
    quick_sort(num,place,j+1,r);
}
int number[1010];
int main()
{
	int n;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(number[x]==0){
			count++;
		}
		number[x]++;
	}
	vector<int>num;
	vector<int>place;
	for(int i=0;i<1010;i++){
		if(number[i]==0)continue;
		else {
			num.push_back(number[i]);
			place.push_back(i);
		}
	}
	quick_sort(num,place,0,count-1);
	int j=0;
	while(j<count-1){
		if(num[j]==num[j+1]){
			int t=1;
			while(num[j]==num[j+t]&&j+t<count){
				t++;
			}
			sort(place.begin()+j,place.begin()+j+t,greater<int>());
			j+=t;
		}
		else j++;
	} 
	for(int i=count-1;i>=0;i--){
		cout<<place[i]<<' '<<num[i]<<endl;
	}
}
