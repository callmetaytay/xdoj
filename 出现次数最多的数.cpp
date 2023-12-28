#include<iostream>
using namespace std;
int num[10010];
int main()
{
	int n;
	cin>>n;
	int number;
	int max=0;
	for(int i=0;i<n;i++){
		cin>>number;
		num[number]++;
		if(num[number]>max)max=num[number];
	}
	for(int i=1;i<10001;i++){
		if(num[i]==0)continue;
		else {
			if(num[i]==max){
				cout<<i;
				break;
			}
		}
	}
}
