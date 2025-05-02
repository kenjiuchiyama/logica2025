#include <stdio.h>

int main(){
    int N;
    int i = 0;
    while(scanf("%d", &N) != EOF){
        while(i < ((N - 1) / 2 + 1)){
            int k1, k2;
            k1 = k2 = 1;
            while(k1 <= ((N - 1) / 2 - i)){
                printf(" ");
                k1++;
            }
            while(k2 <= (2 * i + 1)){
                printf("*");
                k2++;
            }
            printf("\n");
            i++;
        }
        int k4 = 1;
        int k5 = 1;
        while(k4 <= ((N - 1) / 2)){
            printf(" ");
            k4++;
        }
        k4 = 1;
        printf("*");
        printf("\n");
        while(k5 <= ((N - 1) / 2 - 1)){
            printf(" ");
            k5++;
        }
        k5 = 1;
        printf("***");
        printf("\n\n");
        i = 0;
    }

    return 0;
}
