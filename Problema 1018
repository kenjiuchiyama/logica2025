#include <stdio.h>

int main(){
    int N, n100, n50, n20, n10, n5, n2, n1;
    n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;
    
    scanf("%d", &N);
    
    printf("%d\n", N);

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

    while(N == 1){
        n1 = n1 + 1;
        N = N - 1;
    }

    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, n1);

    return 0;
}
