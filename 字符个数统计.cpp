#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int len=str.length();
	int alphacount=0,digitcount=0,othercount=0;
	for(int i=0;i<len;i++){
		if(isalpha(str[i])){
			alphacount++;
		}
		else if(isdigit(str[i]))digitcount++;
		else othercount++;
	}
	cout<<alphacount<<' '<<digitcount<<' '<<othercount;
}
