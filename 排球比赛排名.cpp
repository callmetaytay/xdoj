#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 
using namespace std;
struct team{
	string name;
	int win;
	int score;
	team():name("  "),win(0),score(0){
	}
};
bool compare(team &a,team &b){
	if(a.win!=b.win)return a.win>b.win;
	else if(a.score!=b.score)return a.score>b.score;
	else return a.name<b.name;
}
int main()
{
	int n;
	cin>>n;
	vector<team> teams(n);
	for(int i=0;i<n;i++){
		cin>>teams[i].name;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			if(x>0){
				teams[i].win++;
				if(x==4||x==3)teams[i].score+=3;
				else teams[i].score+=2;
			}
			else if(x<0){
				if(x==-5)teams[i].score++;
			}
		}
	}
	sort(teams.begin(),teams.end(),compare);
	for(int i=0;i<n;i++){
		cout<<teams[i].name<<' '<<teams[i].win<<' '<<teams[i].score<<endl;
	}
}
