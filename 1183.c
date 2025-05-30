#include <stdio.h>

int main() {
    char O[2];
    float M[12][12];
    float x = 0;
    scanf("%c", O);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++){
            scanf("%f", &M[i][j]);
        }
    }
    for (int i = 0; i < 11; i++) {
        for (int j = 1; j < 12; j++) {
            if (j > i) x = x + M[i][j]; 
        }
    }
    if (O[0] == 'S') printf("%.1f\n", x);
    else printf("%.1f\n", x / 66);
    
    return 0;
}
