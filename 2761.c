#include <stdio.h>
#include <string.h>

int main() {
    int inteiro;
    float real;
    char caractere, frase[51];
    scanf("%d %f %c ", &inteiro, &real, &caractere);
    fgets(frase, 51, stdin);
    {
        int i = strcspn(frase, "\n");
        frase[i] = '\0';
    }
    printf("%d%f%c%s\n", inteiro, real, caractere, frase);
    printf("%d\t%f\t%c\t%s\n", inteiro, real, caractere, frase);
    printf("%10d%10f%10c%10s\n", inteiro, real, caractere, frase);

    return 0;
}
