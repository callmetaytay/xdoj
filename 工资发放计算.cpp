#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
struct man{
	string name;
	double base;
	double add;
	double sub;
	double fal;
	man():name("  "),base(0.0),add(0.0),sub(0.0),fal(0.0){
	}
};
int main()
{
	int n;
	cin>>n;
	vector<man> p(n);
	for(int i=0;i<n;i++){
		cin>>p[i].name>>p[i].base>>p[i].add>>p[i].sub;
		p[i].fal=p[i].base+p[i].add-p[i].sub;
	}
	for(int i=0;i<n;i++){
		cout<<p[i].name<<' '<<fixed<<setprecision(2)<<p[i].fal<<endl;
	}
}
