#include <iostream>
using namespace std;

int main() {
    const char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int monthNumber;

    cin >> monthNumber;

    if (monthNumber >= 1 && monthNumber <= 12) {
        const char* monthName = months[monthNumber - 1];
        cout <<  monthName << endl;
    } else {
        cout << "wrong" << endl;
    }

    return 0;
}

