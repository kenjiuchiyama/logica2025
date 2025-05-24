#include <stdio.h>
#include <string.h>

int main() {
    int N, D;
    char X[51];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%s", X);
        scanf("%d", &D);
        for (int k = 0; k < strlen(X); k++){
            if (X[k] - D % 26 >= 65) X[k] = X[k] - D % 26;
            else X[k] = 90 - (D % 26 - (X[k] - 64));
        }
        printf("%s\n", X);
    }

    return 0;
}
