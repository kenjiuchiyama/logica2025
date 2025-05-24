#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char texto[1001], aux[1001];
    
    scanf("%d", &N);
    getchar();
    
    for (int i = 1; i <= N; i++) {
        fgets(texto, 1001, stdin);
        texto[strcspn(texto, "\n")] = '\0';
        int len = strlen(texto);
        for (int k = 0; k < len; k++) {
            if ((texto[k] > 64 && texto[k] < 91) || (texto[k] > 96 && texto[k] < 123)) texto[k] = texto[k] + 3;
        }
        strcpy(aux, texto);
        for (int k = 0; k < len; k++) {
            texto[k] = aux[len - 1 - k];
        }
        texto[len] = '\0';
        for (int k = 0; k < len; k++){
            if (k >= len / 2) texto[k] = texto[k] - 1;
        }
        printf("%s\n", texto);
    }

    return 0;
}
