#include<iostream>
#include<string>
using namespace std;
void len(char*p,int *n){
	int i=0;
	while(*(p+i)!='\0'){
		(*n)++;
		i++;
	}
}
int main()
{
	char str[100];
	cin>>str;
	int x;
	len(str,&x);
	cout<<x;
}
