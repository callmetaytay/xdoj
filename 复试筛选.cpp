#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
	string number;
	int score;
	int eng;
}; 
bool compare(student &a,student &b){
	if(a.score!=b.score){
		return a.score>b.score;
	}
	else if(a.eng!=b.eng){
		return a.eng>b.eng;
	}
	else return a.number<b.number;
}
int main()
{
	int m,n;
	cin>>m>>n;
	vector<student>stu(m);
	for(int i=0;i<m;i++){
		cin>>stu[i].number>>stu[i].score>>stu[i].eng;
	}
	sort(stu.begin(),stu.end(),compare);
	for(int i=0;i<n;i++){
		cout<<stu[i].number<<' '<<stu[i].score<<' '<<stu[i].eng<<endl;
	}
}
