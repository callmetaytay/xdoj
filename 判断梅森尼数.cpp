#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int m){
	for(int i=2;i<=sqrt(m);i++){
		if(m%i==0){
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	int m=pow(2,n)-1;
	cout<<m;
	if(isprime(m)) cout<<" 1";
	else cout<<" 0";
}
