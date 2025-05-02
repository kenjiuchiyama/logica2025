#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcResto(const char *dividendo){
    int resto = 0;
    for(int i = 0; dividendo[i] != '\0'; i++){
        resto = (resto * 10 + (dividendo[i] - '0')) % 2;
    }
    return resto;
}

void calcQuoci(const char *dividendo, char quociente[1006]){
    int n = strlen(dividendo);
    int resto = 0;
    int indice_quociente = 0;

    for (int i = 0; i < n; i++){
        int digito = dividendo[i] - '0';
        int numero = resto * 10 + digito;
        int tempQuociente = numero / 2;
        resto = numero % 2;

        if (tempQuociente != 0 || indice_quociente > 0 || i == n - 1){
            quociente[indice_quociente++] = tempQuociente + '0';
        }
    }

    if (indice_quociente == 0){
        quociente[indice_quociente++] = '0';
    }

    quociente[indice_quociente] = '\0';
}

int main(){
    int T;
    char I[1005];
    char Ivar[1005];
    char quociente[1006];

    scanf("%d", &T);

    while(T > 0){
        scanf("%s", &I);
        strcpy(Ivar, I);
        int i  = 1;
        int n1 = 1;
        while(strcmp(Ivar, "1") != 0){
            if(calcResto(Ivar) == 1) n1++;
            calcQuoci(Ivar, quociente);
            strcpy(Ivar, quociente);
        }
        printf("%d\n", n1);
        T--;
    }

    return 0;
}
