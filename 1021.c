#include <stdio.h>

int main(){
    double N;
    int n100, n50, n20, n10, n5, n2, c100, c50, c25, c10, c5, c1;
    n100 = n50 = n20 = n10 = n5 = n2 = c100 = c50 = c25 = c10 = c5 = c1 = 0;

    scanf("%lf", &N);

    while(N >= 100){
        n100 = n100 + 1;
        N = N - 100;
    }

    while(N >= 50){
        n50 = n50 + 1;
        N = N - 50;
    }

    while(N >= 20){
        n20 = n20 + 1;
        N = N - 20;
    }

    while(N >= 10){
        n10 = n10 + 1;
        N = N - 10;
    }

    while(N >= 5){
        n5 = n5 + 1;
        N = N - 5;
    }

    while(N >= 2){
        n2 = n2 + 1;
        N = N - 2;
    }

    while(N >= 1){
        c100 = c100 + 1;
        N = N - 1;
    }

    while(N >= 0.50){
        c50 = c50 + 1;
        N = N - 0.50;
    }

    while(N >= 0.25){
        c25 = c25 + 1;
        N = N - 0.25;
    }

    while(N >= 0.10){
        c10 = c10 + 1;
        N = N - 0.10;
    }

    while(N >= 0.05){
        c5 = c5 + 1;
        N = N - 0.05;
    }

    while(N >= 0.01){
        c1 = c1 + 1;
        N = N - 0.01;
    }

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, c100, c50, c25, c10, c5, c1);

    return 0;
}
