#include <stdio.h>
#include <string.h>

int main() {
    char input[114];
    scanf("%s", input);
    int n = strlen(input);
    char last;
    int lastNum = 0;
    for (int i = 0; i < n; i++) {
        char a = input[i];
        if (a >= '0' && a <= '9') {
            lastNum = lastNum * 10 + (a ^ 0x30);
        } else {
            for (int j = 0; j < lastNum - 1; j++) {
                printf("%c", last);
            }
            lastNum = 0;
            last = a;
            printf("%c", last);
        }

    }
    for (int i = 0; i < lastNum - 1; i++) {
        printf("%c", last);
    }
    lastNum = 0;
    return 0;
}
