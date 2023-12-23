#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

double calculateSimilarity(const std::string& str1, const std::string& str2) {
    int len1 = str1.length();
    int len2 = str2.length();

    // 创建二维数组并初始化为0，用于存储最长公共子串的长度
    std::vector<std::vector<int> > dp(len1 + 1, std::vector<int>(len2 + 1, 0));

    int maxLen = 0; // 最长公共子串长度

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (std::tolower(str1[i - 1]) == std::tolower(str2[j - 1])) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLen = std::max(maxLen, dp[i][j]);
            }
        }
    }

    // 计算相似度
    double similarity = 2.0 * maxLen / (len1 + len2);
    return similarity;
}

int main() {
    std::string str1, str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    double similarity = calculateSimilarity(str1, str2);

    std::cout << std::fixed << std::setprecision(3) << similarity << std::endl;

    return 0;
}

