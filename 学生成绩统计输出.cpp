#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
struct student{
	string number;
	string name;
	double score;
	student() : number(""), name(""), score(0.0) {}
};
bool compare(student &a,student &b){
	if(a.score!=b.score){
		return a.score>b.score;
	}
	else return a.number<b.number;
}
int main()
{
	int n;
	cin>>n;
	vector<student> students(n);
	for(int i=0;i<n;i++){
		double a,b,c;
		cin>>students[i].number>>students[i].name>>a>>b>>c;
		students[i].score=(a+b+c)/3.0;
	}
	sort(students.begin(),students.end(),compare);
	for(int i=0;i<n;i++){
		cout<<students[i].number<<' '<<students[i].name<<' '<<fixed<<setprecision(1)<<students[i].score<<endl;
	}
}
