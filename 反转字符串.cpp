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
        // 计算每个 2k 的区间，对前 k 个字符进行反转
        std::reverse(str.begin() + i, str.begin() + std::min(i + k, len));
    }
	cout<<str;
}
