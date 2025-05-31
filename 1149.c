#include <stdio.h>

int main() {
    int X[1000], i, x, N, R;
    i = x = R = 0;
    while (1) {
        scanf("%d", &X[i]);
        if (x != 0) {
            if (X[i] > 0) { 
                N = X[i];
                break;
            }
        }
        x++;
        i++;
    }
    for (i = 0; i < N; i++) {
        R += X[0] + i;
    }
    printf("%d\n", R);
    return 0;
}
