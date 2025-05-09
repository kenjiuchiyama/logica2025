#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int vMen, pMen;
    int *X;
    scanf("%d", &N);

    X = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    if (X[0] > X[1]){
            vMen = X[1];
            pMen = 1;
    }
    else {
        vMen = X[0];
        pMen = 0;
    }
    for (int i = 2; i < N; i++) {
        if (vMen > X[i]){
            vMen = X[i];
            pMen = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", vMen, pMen);
    
    return 0;
}
