#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	cin>>x4>>y4;
	int w=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	int h=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	cout<<w*h;
}
