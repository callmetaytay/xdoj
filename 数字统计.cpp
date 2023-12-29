#include<iostream>
using namespace std;
int f(int i){
	if(i==1)return 2;
	else if(i==2)return 3;
	else return (i-1)*(i-1)+3*(i-2)+1;
}
int main()
{
	int m,k;
	cin>>m>>k;
	int a=0,b=0,c=0;
	for(int i=0;i<k;i++){
		int t=f(i+1);
		if(t%m==0)a++;
		else if(t%m==1)b++;
		else if(t%m>1)c++;
	}
	cout<<a<<' '<<b<<' '<<c;
}
