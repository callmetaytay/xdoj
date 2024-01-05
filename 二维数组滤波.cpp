#include<iostream>
#include<vector>
using namespace std;
int arr[1010][1010];
int ret[1010][1010];
int main()
{
	int N; 
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			int sum=0;
			sum=(arr[i][j]+arr[i+1][j+1]+arr[i-1][j-1]+arr[i][j+1]+arr[i][j-1]+arr[i+1][j]+arr[i-1][j]+arr[i+1][j-1]+arr[i-1][j+1]);
			ret[i][j]=(sum+4)/9;
			cout<<ret[i][j]<<' ';
		}
		cout<<endl;
	}
}
