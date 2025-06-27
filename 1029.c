#include <stdio.h>

int fib(int X, int *calls) {
    if (X == 0) {
        *calls = *calls + 1;
        return 0;
    }
    else if (X == 1) {
        *calls = *calls + 1;
        return 1;
    }
    else {
        *calls = *calls + 1;
        return fib(X - 1, calls) + fib(X - 2, calls);
    }
    return 0;
}

int main() {
    int N, X, calls;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        calls = -1;
        scanf("%d", &X);
        printf("fib(%d) = %d calls = %d\n", X, calls, fib(X, &calls));
    }
    
    return 0;
}
