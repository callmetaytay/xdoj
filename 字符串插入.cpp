#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.length();
	char max=s[0];
	int j=0;
	for(int i=0;i<len;i++){
		if(s[i]>max){
			max=s[i];
			j=i;
		}
	}
	s.insert(j+1,1,'*');
	cout<<s;
}
