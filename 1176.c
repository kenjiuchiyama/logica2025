#include <stdio.h>

long double calcfib(int N){
    long double S1 = 0;
    long double S2 = 1;
    long double aux;
    for(int i = 0; i < N; i++){
        aux = S1;
        S1 = S1 + S2;
        S2 = aux;
    }
    return S1;
}

int main(){
    int T;
    int N;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d", &N);
        printf("Fib(%d) = %.0Lf\n", N, calcfib(N));
    }
    
    return 0;
}
