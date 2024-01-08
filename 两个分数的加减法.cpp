#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
//辗转相除法求最大公约数 
int main() {
    int x1, x2, y1, y2;
    cin >> x1 >> x2;
    cin >> y1 >> y2;

    int add_num = x1 * y2 + y1 * x2;
    int sub_num = x1 * y2 - y1 * x2;
    int common_denom = x2 * y2;

    int gcd_add = gcd(abs(add_num), common_denom);
    int gcd_sub = gcd(abs(sub_num), common_denom);

    add_num /= gcd_add;

    sub_num /= gcd_sub;

    cout << add_num << ' ' << common_denom/gcd_add << endl;
    cout << sub_num << ' ' << common_denom/gcd_sub;

    return 0;
}

