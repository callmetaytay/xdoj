#include<iostream>
#include<math.h>
using namespace std;
int num1[45];
int num2[45];
bool judge(int num1,int num2){
	int s1,s2;
	s1=pow(num1-4,2)+pow(num2-4,2);
	s2=pow(num1+4,2)+pow(num2+4,2);
	if(s1>s2)return true;
	else return false;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num1[i]>>num2[i];
	}
	for(int i=0;i<n;i++){
		if(judge(num1[i],num2[i]))cout<<'2'<<' ';
		else cout<<'1'<<' ';
	}
}
