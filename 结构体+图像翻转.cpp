#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int w,h;
	cin>>w>>h;
	int angle;
	vector<vector<int> > num(h,vector<int>(w,0));
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>num[i][j];
		}
	}
	cin>>angle;
	if(angle==0){
		cout<<w<<' '<<h<<endl;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cout<<num[i][j]<<' ';
			}
			cout<<endl;
		}
	}
	else if(angle==90){
		cout<<h<<' '<<w<<endl;
		for(int i=0;i<w;i++){
			for(int j=h-1;j>=0;j--){
				cout<<num[j][i]<<' ';
			}
			cout<<endl;
		}
	}
	else if(angle==180){
		cout<<w<<' '<<h<<endl;
		for(int i=h-1;i>=0;i--){
			for(int j=w-1;j>=0;j--){
				cout<<num[i][j]<<' ';
			}
			cout<<endl;
	    }
	}
	else{
		cout<<h<<' '<<w<<endl;
		for(int i=w-1;i>=0;i--){
			for(int j=0;j<h;j++){
				cout<<num[j][i]<<' ';
			}
			cout<<endl;
		}
	}
}
