#include <stdio.h>

int main(){
    int V;
    int N[10];
    scanf("%d", &V);
    N[0] = V;
    printf("N[0] = %d\n", V);
    for(int i = 1; i <= 9; i++){
        N[i] = 2 * N[i - 1];
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
