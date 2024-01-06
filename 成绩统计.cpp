#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct student{
	string num;
	double score;
	student():num(" "),score(0.0){
	}
};
bool compare(student &a,student &b){
	if(a.score!=b.score)return a.score<b.score;
}
int main()
{
	int n;
	cin>>n;
	vector<student> students(n);
	double sum=0.0;
	for(int i=0;i<n;i++){
		cin>>students[i].num>>students[i].score;
		sum+=students[i].score;
	}
	sort(students.begin(),students.end(),compare);
	cout<<fixed<<setprecision(2)<<students[n-1].score<<' '<<students[n-1].num<<endl;
	cout<<fixed<<setprecision(2)<<students[0].score<<' '<<students[0].num<<endl;
	cout<<fixed<<setprecision(2)<<sum<<' '<<fixed<<setprecision(2)<<sum/n;
}

