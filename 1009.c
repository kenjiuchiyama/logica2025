#include <stdio.h>

int main() {
    char nome[100];
    double salario, montante, total;
    scanf("%s\n%lf\n%lf", nome, &salario, &montante);
    total = salario + 0.15*montante;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
