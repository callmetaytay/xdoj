#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
struct attendance{
	int student_id;
	int total_time;
	attendance (int id,int time):student_id(id),total_time(time){
	}
};
bool compare(attendance &a,attendance &b){
	if(a.total_time!=b.total_time)return a.total_time>b.total_time;
	else return a.student_id<b.student_id;
}
int main()
{
	int n;
	cin>>n;
	vector<attendance> record(110,attendance(0,0));
	for(int i=0;i<n;i++)
	{
		int id,start_hour,start_minute,end_hour,end_minute;
		string start_time,end_time;
		char clon;
		cin>>id>>start_time>>end_time;
		stringstream ss_start(start_time);
		ss_start>>start_hour>>clon>>start_minute;
		stringstream ss_end(end_time);
		ss_end>>end_hour>>clon>>end_minute;
		int total_time=end_hour*60+end_minute-start_hour*60-start_minute;
		record[id].student_id=id;
		record[id].total_time+=total_time;
	}
	vector<attendance> result;
	int count=0;
	for(int i=0;i<110;i++){
		if(record[i].total_time!=0){
			result.push_back(record[i]);
			count++;
		}
	}
	sort(result.begin(),result.end(),compare);
	for(int i=0;i<count;i++){
		cout<<result[i].student_id<<' '<<result[i].total_time<<endl;
	}
}










