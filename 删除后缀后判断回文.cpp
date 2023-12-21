#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string str[5]={"s","er","ly","ed","ing"};
void subletter(string &s){
	
	for(int i=0;i<5;i++){
		string ss;
	    ss.assign(s,s.length()-str[i].length(),str[i].length());
		size_t found=ss.rfind(str[i]);
		if(found!=std::string::npos){
			size_t found1=s.rfind(str[i]);
			s.erase(found1,str[i].length());
		}
	}
} 
bool judge(string s){
	string ss=s;
	reverse(s.begin(),s.end());
	if(ss==s)return true;
	else return false;
	
}
int main()
{
	string s;
	cin>>s;
	subletter(s);
	cout<<s<<endl;
	if(judge(s))cout<<"Yes";
	else cout<<"No";
}
