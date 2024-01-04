#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int seat[20][5];
int leftseat[20];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<20;i++){
		leftseat[i]=5;
	}
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		int flag=0;
		for(int j=0;j<20;j++){
			if(leftseat[j]>=t){
				int count=0;
				int k=0;
				while(count<t){
					if(seat[j][k]==0){
						seat[j][k]=1;
						cout<<j*5+k+1<<' ';
						count++;
						flag=1;
						k++;
					}
					else k++;
				}
				leftseat[j]-=t;
				cout<<endl;
				break;
			}
			else continue;
		}
		if(flag==0){
		int count=0;
		while(count<t){
			for(int j=0;j<20;j++){
			int k=0;
			int l=0;
			while(k<5){
						if(seat[j][k]==0){
					seat[j][k]=1;
					cout<<j*5+k+1<<' ';
					count++;
					l++;
					k++;
				}
				else k++;
			}
		
			leftseat[j]-=l;
			}
		}
		cout<<endl;
		}
	}
	/*for(int i=0;i<20;i++){
		for(int j=0;j<5;j++){
			if(seat[i][j]==1){
				cout<<j+i*5+1<<' ';
			}
		}
		cout<<endl;
	}*/
}
