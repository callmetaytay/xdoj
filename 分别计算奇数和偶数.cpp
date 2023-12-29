#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int even=0,uneven=0;
	for(int i=1;i<=n;i++){
		if(i%2==0)even+=i;
		else uneven+=i;
	}
	cout<<uneven<<' '<<even;
}
