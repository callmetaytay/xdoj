#include<iostream>
#include<string>
using namespace std;
int main()
{
	int year,month,day;
	cin>>year>>month>>day;
	int day1=2021*365+318+505-15,day2=year*365+day+(year/4-(year/100)*3/4);
	if((year%4==0&&year%100!=0)||(year%400==0)&&(month<=2))day2--;
	int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<month-1;i++){
		day2+=monthday[i];
	}
	int x=(day1-day2)%7;
	switch(x){
		case 0:
			cout<<"Sunday";
			break;
		case 1:
			cout<<"Saturday";
			break;
		case 2:
			cout<<"Friday";
			break;
		case 3:
			cout<<"Thursday";
			break;
		case 4:
			cout<<"Wendnesday";
			break;
		case 5:
			cout<<"Tuesday";
			break;
		default:
			cout<<"Monday";
			break;
		}
			
}
