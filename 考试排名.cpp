#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct students{
	string name;
	int sum;
	int addition;
	students():name("  "),sum(0),addition(0){
	}
};
bool compare(students &a,students &b){
	if(a.sum!=b.sum)return a.sum>b.sum;
	else return a.addition>b.addition;
}
int main()
{
	int n;
	cin>>n;
	vector<students> stu(n);
	for(int i=0;i<n;i++){
		cin>>stu[i].name;
		for(int j=0;j<5;j++){
			int x;
			cin>>x;
			stu[i].sum+=x;
		}
		cin>>stu[i].addition;
		stu[i].sum+=stu[i].addition;
	}
	sort(stu.begin(),stu.end(),compare);
	for(int i=0;i<n;i++){
		cout<<stu[i].name<<' '<<stu[i].sum<<' '<<stu[i].addition;
		cout<<endl;
	}
}
