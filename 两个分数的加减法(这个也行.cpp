#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	cin>>x1>>x2;
	cin>>y1>>y2;
	int x=x2*y2;
	int y=x;
	int a=x1*y2;
	int b=y1*x2;
	int add=a+b,sub=a-b;
	for(int i=min(abs(add),x);i>=2;i--){
		if(abs(add)%i==0&&x%i==0){
			add/=i;
			x/=i;
			break;
		}
	}
	for(int i=min(abs(sub),y);i>=2;i--){
		if(abs(sub)%i==0&&y%i==0){
			sub/=i;
			y/=i;
			break;
		}
	}
	cout<<add<<' '<<x<<endl;
	cout<<sub<<' '<<y;
}

