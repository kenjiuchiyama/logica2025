#include <stdio.h>

int main(){
    int N, Q, M;
    N = -1;

    while(N != 0){
        scanf("%d", &N);
        M = N;
        Q = 0;
        if(N != 0){
            while(M > 0){
                Q = Q + M * M;
                M = M - 1;
            }
            printf("%d\n", Q);
        }
    }
    
    return 0;
}
