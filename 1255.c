#include <stdio.h>
#include <string.h>

int main() {
    int N, f[26];
    char texto[201];
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++) {
        int max = 0;
        for (int j = 0; j < 26; j++) f[j] = 0;
        fgets(texto, 201, stdin);
        texto[strcspn(texto, "\n")] = '\0';
        for (int j = 0; j < strlen(texto); j++) {
            for (int k = 0; k < 26; k++) {
                if (texto[j] == 'A' + k || texto[j] == 'a' + k) f[k]++;
            }
        }
        for (int j = 0; j < 26; j++) {
            if (max < f[j]) max = f[j];
        }
        for (int j = 0; j < 26; j++) {
            if (f[j] == max) printf("%c", 'a' + j);
        }
        printf("\n");
    }

    return 0;
}
