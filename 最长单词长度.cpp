#include<iostream>
#include<string>
using namespace std;
char str[100];

int main()
{
	int count = 0;
	char* p = str;
	int max = 0;
	cin.getline(str, 100);
	while (*p != '.') {
		if (*p == ' ') {
			p++;
			count = 0;
			continue;
		}
		
		count++;
		if (count > max)max = count;
		p++;
	}
	cout << max;
}
