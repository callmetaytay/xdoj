#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int evennum=0,unevennum=0,num=0;
	for(int i=n;i<=n*n;i++){
		if(i%2==0)evennum++;
		else unevennum++;
		if(i%4==0&&i%3!=0)num++;
	}
	int max=evennum+unevennum;
	if(evennum+num>max)max=num+evennum;
	if(unevennum+num>max)max=num+unevennum;
	cout<<unevennum<<' '<<evennum<<' '<<num<<endl;
	cout<<max;
}
