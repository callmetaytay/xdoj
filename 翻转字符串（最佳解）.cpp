#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    int k;
    
    std::cin >> s >> k;
    
    int n = s.length();

    for (int i = 0; i < n; i += 2 * k) {
        std::reverse(s.begin() + i, s.begin() + std::min(i + k, n));
    }

    std::cout << s << std::endl;

    return 0;
}

