#include <stdio.h>

int main() {
    int N, R;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &R);
        printf("resposta %d: %d\n", i + 1, R);
    }

    return 0;
}
