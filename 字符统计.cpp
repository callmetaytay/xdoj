#include<iostream>
#include<string>
using namespace std;
int main()
{
	char let;
	int judge;
	cin>>let>>judge;
	string str;
	cin>>str;
	int count=0;
	int len=str.length();
	if(judge==0){
		for(int i=0;i<len;i++){
			if((str[i]==let)||(str[i]==let-32)||(str[i]==let+32))count++;
		}
	}
	else {
		for(int i=0;i<len;i++){
			if(str[i]==let)count++;
		}
	}
	cout<<count;
}
