#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	int k;
	cin>>str>>k;
	int len=str.length();
	for (int i = 0; i < len; i += 2 * k) {
        // ����ÿ�� 2k �����䣬��ǰ k ���ַ����з�ת
        std::reverse(str.begin() + i, str.begin() + std::min(i + k, len));
    }
	cout<<str;
}
