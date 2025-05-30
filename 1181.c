#include <stdio.h>

int main() {
    int L;
    float M[12][12];
    float x = 0;
    char T[2];
    scanf("%d %c", &L, T);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }
    for (int j = 0; j < 12; j++) {
        x = x + M[L][j];
    }
    if (T[0] == 'S') printf("%.1f\n", x);
    else printf("%.1f\n", x / 12);
    
    return 0;
}
