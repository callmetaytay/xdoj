#include<iostream>
using namespace std;
int num[35];
bool triangle(int a,int b,int c){
	int max=a;
	if(b>max)max=b;
	if(c>max)max=c;
	if((a+b+c-max)>max)return true;
	else return false; 
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int count=0;
	for(int i=0;i<n-2;i++){
		if(triangle(num[i],num[i+1],num[i+2]))count++;
	}
	cout<<count;
 } 
