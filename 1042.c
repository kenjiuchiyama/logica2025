#include <stdio.h>

int main(){
    int A, B, C, a, b, c, aux;
    scanf("%d %d %d", &A, &B, &C);

    a = A;
    b = B;
    c = C;

    if(A < B){ aux = A; A = B; B = aux; }
    if(A < C){ aux = A; A = C; C = aux; }
    if(B < C){ aux = B; B = C; C = aux; }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", C, B, A, a, b, c);

    return 0;
}
