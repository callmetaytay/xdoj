#include<iostream>
#include<vector>
using namespace std;
int pull_light(int &light){
	if(light==0)light=1;
	else light=0;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> light(n,1);
	for(int i=2;i<=m;i++){
		for(int j=0;j<n;j++){
			if((j+1)%i==0)pull_light(light[j]);
		}
	}
	for(int i=0;i<n;i++){
		if(light[i]==1)cout<<i+1<<' ';
	}
}
