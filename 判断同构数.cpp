#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s=n*n;
	int judge=0;
	if((s-n)%10==0)judge=1;
	if(n%10==0)judge=0;
	cout<<n<<' '<<judge;
}
