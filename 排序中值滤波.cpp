#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<vector<int> > a(16,vector<int>(16,0));
	vector<vector<int> > b(16,vector<int>(16,0));
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<16;i++){
		b[0][i]=a[0][i];
		b[i][0]=a[i][0];
		b[15][i]=a[15][i];
		b[i][15]=a[i][15];
	}
	for(int i=1;i<15;i++){
		for(int j=1;j<15;j++){
			vector<int> temp(9,0);
			int t=0;
			for(int x=-1;x<=1;x++){
				for(int y=-1;y<=1;y++){
					temp[t]=a[i+x][j+y];
					t++; 
				}
			}
			sort(temp.begin(),temp.end());
			b[i][j]=temp[4];
		}
	}
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			cout<<b[i][j]<<' ';
		}
		cout<<endl;
	}
}
