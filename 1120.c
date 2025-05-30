#include <stdio.h>
#include <string.h>

int main() {
    char D[2], N[101], V[101];
    scanf("%s %s", D, N);
    while (strcmp(D, "0") != 0 || strcmp(N, "0") != 0) {
        strcpy(V, "0");
        int j = 0;
        int z = 0;
        for (int i = 0; i < strlen(N); i++) {
            if (D[0] != N[i]) {
                if (z == 0) {
                    if (N[i] != '0') {
                        V[j] = N[i];
                        j++;
                        z++;
                    }
                }
                else {
                    V[j] = N[i];
                    j++;
                }
            }
        }
        if (V[0] != '0') V[j] = '\0';
        printf("%s\n", V);
        scanf("%s %s", D, N);
    }

    return 0;
}
