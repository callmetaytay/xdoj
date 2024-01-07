#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
	int num;
	string name;
	int sum;
	student():num(0),name("  "),sum(0){
	}
};
bool compare(student &a,student &b){
	return a.sum>b.sum;
}
int main()
{
	int n;
	cin>>n;
	vector<student> stu(n);
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].num>>stu[i].name;
		int x;
		for(int j=0;j<3;j++){
			cin>>x;
			stu[i].sum+=x;
		}
	}
	sort(stu.begin(),stu.end(),compare);
	cout<<stu[0].name<<' '<<stu[0].num<<' '<<stu[0].sum;
}
