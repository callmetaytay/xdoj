#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string str[210];
int len[210];
int main()
{
	int i=0;
	do{
		getline(cin,str[i]);
		if(str[i]=="***end***")break;
		len[i]=str[i].length();
		i++;
	}while(true);
	int max=len[0];
	int target=0;
	for(int j=0;j<i;j++){
		if(len[j]>max){
		max=len[j];
		target=j;}
	}
	cout<<max<<'\n'<<str[target];
}
