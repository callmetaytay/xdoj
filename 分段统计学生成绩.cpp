#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=0,b=0,c=0;
	for(int i=0;i<n;i++){
		string name;
		int score;
		cin>>name>>score;
		if(score>=80)a++;
		else if(score>=60&&score<=79)b++;
		else c++;
	}
	cout<<a<<' '<<b<<' '<<c;
}
