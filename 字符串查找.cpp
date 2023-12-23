#include<iostream>
#include<string>
using namespace std;
string line[1000];
string copyline[1000];
bool big(char x){
	if((x>='A')&&(x<='Z'))return true;
	else return false;
}
void small(string& str){
	int len=str.length();
	for(int i=0;i<len;i++){
	if(big(str[i])){
	str[i]+=32;}
	}
}
int main()
{
	string s;
	cin>>s;
	int judge,n;
	cin>>judge;
	cin>>n;
	for(int i=0;i<n;i++)cin>>line[i];
	if(judge==1){
        for(int i=0;i<n;i++){
		    if(line[i].find(s)!=-1)cout<<line[i]<<endl;
  	    }
    }
    else {
    	small(s);
    	for(int i=0;i<n;i++){
    		copyline[i].operator=(line[i]);
			small(line[i]);}
    	for(int i=0;i<n;i++){
		    if(line[i].find(s)!=-1)cout<<copyline[i]<<endl;
  	    }
	}
	

}
