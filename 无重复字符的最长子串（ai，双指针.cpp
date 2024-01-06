#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::getline(std::cin, s);

    int n = s.length();
    std::vector<int> lastIndex(256, -1); // 记录字符上一次出现的位置
    int left = 0, maxLen = 0;

    for (int right = 0; right < n; right++) {
        if (lastIndex[s[right]] != -1) {
            left = std::max(left, lastIndex[s[right]] + 1);
        }
        lastIndex[s[right]] = right;
        maxLen = std::max(maxLen, right - left + 1);
    }

    std::cout << maxLen << std::endl;

    return 0;
}

