#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	int k;
	cin>>str>>k;
	int len=str.length();
	int j=0;
	for(int i=0;i<len;i++){
		j++;
		if(j==2*k){
			reverse(str.begin()+i-2*k+1,str.begin()+i-k+1);
			if((len-i-1)<k)reverse(str.begin()+i+1,str.end());
			else if((len-i-1)<2*k&&((len-i-1)>=k)){
				reverse(str.begin()+i+1,str.begin()+i+k+1);
			}
			j=0;
		}
	}
	cout<<str;
}
