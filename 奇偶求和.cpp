#include<iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int sum_even=0,sum_odd=0;
	int counteven=0,countodd=0;
	for(int i=1;i<=10000;i++){
		int a=3*(i-1)*(i-1)+(i-1)*2+1;
		if(a<=100)continue;
		else {
			if(a%2==0&&counteven<m){
				sum_even+=a;
				counteven++;
			}
			else if(a%2!=0&&countodd<m-1){
				sum_odd+=a;
				countodd++;
			}
		}
		if(counteven==m&&countodd==m-1)break;
	}
	cout<<sum_even<<' '<<sum_odd;
}
