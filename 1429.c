#include <stdio.h>
#include <string.h>

int factorial(int x) {
    if (x == 0) x = 1;
    else {
        x = x * factorial(x - 1);
    }
    return x;
}

int main() {
    while (1) {
        char number[6];
        scanf("%s", number);
        if (number[0] == '0') break;
        int result = 0;
        int len = strlen(number);
        for (int i = 0; i < len; i++) {
            result += (number[i] - '0') * factorial(len - i);
        }
        printf("%d\n", result);
    }
    return 0;
}
