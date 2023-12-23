#include<iostream>
#include<string>
using namespace std;
void sort(char smaller[],int l,int r){
	if(l>=r)return ;
	char mid=smaller[(l+r)/2];
	int i=l-1,j=r+1;
	while(i<j){
		do i++;while(smaller[i]<mid);
		do j--;while(smaller[j]>mid);
		if(i<j)swap(smaller[i],smaller[j]);
	}
	if(l<j)sort(smaller,l,j);
	if(j+1<r)sort(smaller,j+1,r);
}
int main()
{
	string str;
	cin>>str;
	int len=str.length();
	char first=str[0];
	char bigger[110],smaller[110];
	int count1=0,count2=0;
	for(int i=1;i<len;i++){
		if(str[i]<=first){
			smaller[count2]=str[i];
			count2++;
		}
		else {
		bigger[count1]=str[i];
		count1++;}
	}
	for(int i=0;i<count1;i++)cout<<bigger[i];
	cout<<first;
	sort(smaller,0,count2-1);
	for(int i=0;i<count2;i++)cout<<smaller[i];
}
