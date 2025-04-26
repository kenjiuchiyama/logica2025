#include <stdio.h>

int main(){
    double N1, N2, N3, N4, Ne, M, Mf;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    M = (2 * N1 + 3 * N2 + 4 * N3 + N4) / 10;

    printf("Media: %.1lf\n", M);

    if(M >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(5 <= M && M < 7){
        printf("Aluno em exame.\n");
        scanf("%lf", &Ne);
        printf("Nota do exame: %.1lf\n", Ne);
        Mf = (M + Ne) / 2;
        if(Mf >= 5){
            printf("Aluno aprovado.\nMedia final: %.1lf\n", Mf);
        }
        else{
            printf("Aluno reprovado.\nMedia final: %.1lf\n", Mf);
        }
    }
    else if(M < 5){
        printf("Aluno reprovado.\n");
    }

    return 0;
}
