#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
struct student{
	int num;
	string name;
	double sum;
	student():num(0),name(" "),sum(0.0){
	}
};
bool compare(student &a,student &b){
	if(a.sum!=b.sum)return a.sum>b.sum;
	else return a.num<b.num;
}
int main()
{
	int n;
	cin>>n;
	vector<student> students(n);
	for(int i=0;i<n;i++){
		cin>>students[i].num>>students[i].name;
		for(int j=0;j<3;j++){
			int x;
			cin>>x;
			students[i].sum+=x;
		}
		students[i].sum/=3.0;
	}
/*	sort(students.begin(),students.end(),compare);
	for(int i=0;i<n;i++){
		cout<<students[i].num<<' '<<students[i].name<<' '<<fixed<<setprecision(1)<<students[i].sum;
	}*/
 } 
