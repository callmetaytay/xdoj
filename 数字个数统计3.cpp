#include<iostream>
using namespace std;
int main()
{
	int A,B;
	cin>>A>>B;
	if(A>B){
		int t=A;
		A=B;
		B=t;
	}
	int num3=0,num4=0,num52=0;
	for(int i=A;i<=B;i++){
		if(i%3==0)num3++;
		if(i%4==0)num4++;
		if(i%5==0&&i%2!=0)num52++;
	}
	cout<<num3<<' '<<num4<<' '<<num52<<endl<<num4;
	//һ����Χ��4�ı��� һ��С��3�ı�����һ������ 5 �ı����Ҳ��� 2 �ı������� 
}
