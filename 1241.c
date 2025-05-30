#include <stdio.h>
#include <string.h>

int main() {
    int N, c;
    char A[1001], B[1001];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        c = 0;
        scanf("%s %s", A, B);
        int lenA = strlen(A);
        int lenB = strlen(B);
        for (int j = 0; j < lenB; j++) {
            if (B[lenB - 1 - j] != A[lenA - 1 - j]) c++;
        }
        if (c != 0) printf("nao encaixa\n");
        else printf("encaixa\n");
    }
    return 0;
}
