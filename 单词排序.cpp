#include<iostream>
#include<string>
using namespace std;
int N;
string str[10];
void wd_sort(string str[],int l,int r){
	if(l>=r)return ;
	string mid=str[(l+r)/2];
	int i=l-1,j=r+1;
	while(i<j){
		do i++;while(mid.compare(str[i])==1);
		do j--;while(mid.compare(str[j])==-1);
		if(i<j)swap(str[i],str[j]);
	}
	wd_sort(str,l,j);
	wd_sort(str,j+1,r);
}
int main()
{
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>str[i];
	}
	wd_sort(str,0,N-1);
	for(int i=0;i<N;i++){
		cout<<str[i]<<endl;
	}
}
