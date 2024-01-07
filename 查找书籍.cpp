#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct book{
	double price;
	string name;
	book():price(0.0),name("  "){
	}
};
bool compare(book &a,book &b){
	return a.price<b.price;
}
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	vector<book> books(n);
	for(int i=0;i<n;i++){
		getline(cin,books[i].name);
		cin>>books[i].price;
		cin.ignore();
	}
	sort(books.begin(),books.end(),compare);
	//������Ǹ����ź���Ҫ��һ���ո񣬲�Ȼ���ʽ������������������������xd 
	cout<<fixed<<setprecision(2)<<books[n-1].price<<", "<<books[n-1].name<<endl;
	cout<<fixed<<setprecision(2)<<books[0].price<<", "<<books[0].name<<endl;
}
