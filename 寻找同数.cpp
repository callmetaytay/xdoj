#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m,s;
	cin>>m>>s;
	int lenm=m.length(),lens=s.length();
	int count=0;
	for(int i=0;i<=lens-lenm;i++){
		int judge=0;
		for(int j=i;j<i+lenm;j++){
			if(s[j]!=m[j-i]){
				judge=1;
				break;
			}
		}
		if(judge==0)count++;
	}
	cout<<count;
}
