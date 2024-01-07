#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	int x,y,z;
	string s;
	getline(cin,s);
	stringstream ss(s);
	char d=',';
	ss>>x>>d>>y>>d>>z;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int day=0;
	if(x%4!=0){
		day=z;
		for(int i=0;i<y-1;i++){
			day+=month[i];
		}
	}
	else if((x%4==0&&x%100!=0)||(x%400==0)){
		day=z;
		for(int i=0;i<y-1;i++){
			day+=month[i];
		}
		if(y>2)day++;
	}
	cout<<day;
}
